class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>>res1;
        vector<vector<int>>res2;
        int n=intervals.size();
        bool inserted=false;
        for(int i=0;i<n;i++){
            if(!inserted && intervals[i][0]>newInterval[0]){
                res1.push_back(newInterval);
                inserted=true;
            }
            res1.push_back(intervals[i]);
        }
        if(!inserted){
            res1.push_back(newInterval);
        }
        int start1=res1[0][0];
        int end1=res1[0][1];
        for(int i=1;i<res1.size();i++){
        int start2=res1[i][0];
        int end2=res1[i][1];
        if(end1>=start2){
            end1=max(end1,end2);
            continue;
        }
        res2.push_back({start1,end1});
        start1=start2;
        end1=end2;
        }
        res2.push_back({start1,end1});
        return res2;
    }
};