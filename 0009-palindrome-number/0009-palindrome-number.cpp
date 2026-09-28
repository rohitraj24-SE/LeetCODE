class Solution {
public:
    bool check(int x,int low,int high){
        string s=to_string(x);
        int len=high-low+1;
        if( len==0 || len==1)
        return true;
        if(s[low]!=s[high])
        return false;
    return check(x,low+1,high-1);
    }
    bool isPalindrome(int x){
        if(x<0)
        return false;
        string s=to_string(x);
        return check(x,0,s.length()-1);
    }
};