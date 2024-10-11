#include <vector>
#include <queue>
#include <algorithm>

class Solution {
public:
    int smallestChair(std::vector<std::vector<int>>& times, int targetFriend) {
        int n = times.size();

        // Priority queue (min-heap) to store available chairs
        std::priority_queue<int, std::vector<int>, std::greater<int>> availableChairs;
        for (int i = 0; i < n; ++i) {
            availableChairs.push(i);  // Initially, all chairs are available
        }

        // Priority queue (min-heap) to store chairs in use with their departure time
        std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, std::greater<std::pair<int, int>>> usingChairs;

        // Create a list of events (arrival and departure)
        std::vector<std::tuple<int, int, int>> events;
        for (int i = 0; i < n; ++i) {
            events.emplace_back(times[i][0], i, 1);  // (arrival time, friend index, arrival=1)
            events.emplace_back(times[i][1], i, 0);  // (departure time, friend index, arrival=0)
        }

        // Sort events by time (in case of tie, departures are processed first)
        std::sort(events.begin(), events.end(), [](const auto& a, const auto& b) {
            return std::get<0>(a) < std::get<0>(b) || (std::get<0>(a) == std::get<0>(b) && std::get<2>(a) < std::get<2>(b));
        });

        // Chair allocation process
        std::vector<int> friendToChair(n, -1);  // Map each friend to their assigned chair
        for (const auto& event : events) {
            int time = std::get<0>(event);
            int friendIndex = std::get<1>(event);
            bool isArrival = std::get<2>(event);

            // Process departures first to free up chairs
            while (!usingChairs.empty() && usingChairs.top().first <= time) {
                availableChairs.push(usingChairs.top().second);  // Release chair
                usingChairs.pop();
            }

            if (isArrival) {
                // Assign the smallest available chair to the arriving friend
                int chair = availableChairs.top();
                availableChairs.pop();
                friendToChair[friendIndex] = chair;

                // If it's the target friend, return the chair number
                if (friendIndex == targetFriend) {
                    return chair;
                }

                // Add the chair to the heap with the friend's departure time
                usingChairs.push({times[friendIndex][1], chair});
            }
        }

        return -1;  // Should not reach here
    }
};
