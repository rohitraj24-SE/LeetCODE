class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int n=nums.size();
        int maxEnding=0;
        int minEnding=0;
        int maxSum=0;
        int minSum=0;
        for(int i=0;i<n;i++){
            maxEnding=max(maxEnding+nums[i],nums[i]);
            maxSum=max(maxSum,maxEnding);
            minEnding=min(minEnding+nums[i],nums[i]);
            minSum=min(minSum,minEnding);
        }
        return max(maxSum,abs(minSum));
    }
};