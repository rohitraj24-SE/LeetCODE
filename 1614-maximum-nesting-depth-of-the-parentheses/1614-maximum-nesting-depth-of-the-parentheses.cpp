class Solution {
public:
    int maxDepth(string s) {
        
        int count=0;
        int max_Count=INT_MIN;
        for(char c :s){
            if(c=='(')
            count++;
            else if (c==')')
            count--;
            max_Count=max(count,max_Count);    
            }
        return max_Count;
    }
};