class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n=nums.size();
        
        unordered_map<int,int>f;
        for(int i=0;i<n;i++){
            f[nums[i]]++;
            if(f[nums[i]]>=2){
                return true;
            }
        }
        return false;
    }
};