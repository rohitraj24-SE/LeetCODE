class Solution {
public:
long long fun(vector<int>&a,int n,int speed){
    long long h=0;
    for(int i=0;i<a.size();i++){
        h=h+a[i]/speed;
        if(a[i]%speed!=0)
        h++;
    }
    return h;
}
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int low=1,high=*max_element(piles.begin(),piles.end());
        int res=-1;
        while(low<=high){
            int mid=(low+high)/2;
            long long hour=fun(piles,n,mid);
            if(hour>h)
            low=mid+1;
            else{
            res=mid;
            high=mid-1;
            }
        }
    return res;
    }
};