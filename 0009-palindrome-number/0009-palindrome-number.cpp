class Solution {
public:
    bool isPalindrome(int x) {
    if(x<0){
        return false;
    }    
    long long o=x;
    long long r=0;
    while(x>0){
        int d= x%10;
        r= r*10 + d;
        x= x/10;
    }
    return o==r;
    }
};