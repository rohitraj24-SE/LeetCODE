class Solution {
public:
void fun(vector<int>&candidates,int idx,int n,int sum,vector<int>&dairy,vector<vector<int>>&res,int target){
    if(idx==n){
        if(sum==target)
        res.push_back(dairy);
        return;
    }
    fun(candidates,idx+1,n,sum,dairy,res,target);
    if(candidates[idx]+sum<=target){
        dairy.push_back(candidates[idx]);
        sum+=candidates[idx];
        fun(candidates,idx,n,sum,dairy,res,target);
        dairy.pop_back();
        sum-=candidates[idx];
    }
    return;
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>dairy;
        vector<vector<int>>res;
        int n=candidates.size();
        int sum=0;
        int idx=0;
        fun(candidates,idx,n,sum,dairy,res,target);
        return res;
    }
};