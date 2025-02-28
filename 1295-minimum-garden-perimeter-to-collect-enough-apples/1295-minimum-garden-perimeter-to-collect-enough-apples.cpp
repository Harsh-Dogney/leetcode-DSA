class Solution {
public:
    long long minimumPerimeter(long long neededApples) {
     long long total=0;
    long long l=0;
    while(total <neededApples){
        l++;
        total=total + 12*l*l;
    }    

    return 8*l;
    }
};