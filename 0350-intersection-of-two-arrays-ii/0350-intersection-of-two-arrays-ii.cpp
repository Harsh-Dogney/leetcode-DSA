class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
    unordered_map<int, int> hashmap;
        vector<int> Res;
        for (int i = 0; i < nums1.size(); i++)
        {
            hashmap[nums1[i]]++;
        }
        for (int i = 0; i < nums2.size(); i++)
        {
            int element = nums2[i];
            if (hashmap.find(element) != hashmap.end())
            {
                Res.push_back(element);
                hashmap[element]--;
                if (hashmap[element] == 0)
                {
                    hashmap.erase(element);
                }
            }
        }
        return Res;    
    }
};