class Solution {
public:
    int missingInteger(vector<int>& nums) {
        unordered_map<int,int>f;
        int n=nums.size();
        for(int i=0;i<n;i++){
           f[nums[i]];
        }
        int sum=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]+1){
            sum+=nums[i];
            }
            else{ 
            break;
            }
        }
        while(f.count(sum)){
            sum++;
        }
    return sum;
    }
};