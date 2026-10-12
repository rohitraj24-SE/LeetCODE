class Solution {
public:
bool isPalindrome(string &s,int l,int r){
    while(l<r){
        if(s[l]!=s[r])
        return false;
        l++;
        r--;
    }
    return true;
}
void fun(string &s,int n,int idx,vector<string> &dairy,vector<vector<string>>&ans){
    if(idx==n){
        ans.push_back(dairy);
        return;
    }
    for(int i=idx;i<s.length();i++){
        if(isPalindrome(s,idx,i)){
        dairy.push_back(s.substr(idx,i-idx+1));
        fun(s,n,i+1,dairy,ans);
        dairy.pop_back();
        }
    }
}
    vector<vector<string>> partition(string s) {
        int n=s.length();
        int idx=0;
        vector<string>dairy;
        vector<vector<string>>ans;
        fun(s,n,0,dairy,ans);
        return ans;
    }
};