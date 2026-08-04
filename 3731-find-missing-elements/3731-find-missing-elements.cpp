class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int>ans;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-1;i++){
            int low=nums[i];
            int high=nums[i+1];
            if(high-low>1){
                for(int x=low+1;x<high;x++){
                ans.push_back(x);
                }
            }
        }
    return ans;
    }
};