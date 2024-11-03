class Solution {
    public boolean rotateString(String s, String goal) {
    String temp = s+s;  
    int n = s.length();
    int m = goal.length();
    if(n!=m)return false;
    else if (temp.indexOf(goal)==-1)return false ;
    else{
        return true ;
    }
    }
}