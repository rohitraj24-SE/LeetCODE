class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
        int largest=arr[0];
        int index=0;
        for(int i=1;i<n-1;i++){
            if(arr[i]>largest){
                largest=arr[i];
                index=i;
            }
        }
    return index;    
    }
};