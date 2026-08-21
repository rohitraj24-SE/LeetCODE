class Solution {
public:
bool fun(vector<int>&arr,int n,int s,long long limit){
    int k=1;
    int sum=0;
    for(int i=0;i<n;i++){
        if(sum+arr[i]<=limit){
            sum=sum+arr[i];
        }else{
            k++;
            sum=arr[i];
            if(k>s)
            return false;
        }
    }
    return true;
}
    int splitArray(vector<int>& nums, int k) {
        int n=nums.size();
        if(n<k)
        return -1;
        long long low=0,high=0;
        for(int i=0;i<n;i++){
            low=max(low,(long long)nums[i]);
            high+=nums[i];
        }
        int res=-1;
        while(low<=high){
            long long mid=(low+high)/2;
            if(fun(nums,n,k,mid)){
                res=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
    return res;
    }
};