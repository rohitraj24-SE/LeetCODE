class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_map<int,int>f;
        for(int i=0;i<nums.size();i++){
            f[nums[i]]++;
        }
        int x=k;
        while(f.find(x)!=f.end()){
            x+=k;
        }
    return x;   
    }
};