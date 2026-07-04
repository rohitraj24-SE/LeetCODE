class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int>f;
        int n=s.size();
        int high=0;
        int low=0;
        int res=0;
        int maxFreq=0;
        for(int high=0;high<n;high++){
            f[s[high]]++;
            maxFreq=max(maxFreq,f[s[high]]);
            while((high-low+1)-maxFreq>k){
                f[s[low]]--;
                low++;
            }
            int len=high-low+1;
            res=max(res,len);
        }
        return res;
    }
};