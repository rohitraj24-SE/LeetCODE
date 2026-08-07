class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>f;
        for(int i=0;i<n;i++){
            if(f.count(nums[i])){
            if(i-f[nums[i]]<=k)
                return true;
            }
        f[nums[i]]=i;
    }
    return false;    
    }
};