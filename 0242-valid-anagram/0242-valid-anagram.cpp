class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())
        return false;
        unordered_map<char,int>f;
        for(char c:s){
        f[c]++;
        }
        for(char c:t){
        f[c]--;
        if(f[c]<0)
        return false;
        }
        return true;
    }
};