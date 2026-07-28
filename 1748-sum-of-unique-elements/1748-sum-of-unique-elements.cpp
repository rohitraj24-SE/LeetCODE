class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>f;
        for(int i=0;i<n;i++){
            f[nums[i]]++;
            }
            int sum=0;
            for(int i=0;i<n;i++){
            if(f[nums[i]]==1){
                sum+=nums[i];
                }
            }
        return sum;
        }
};