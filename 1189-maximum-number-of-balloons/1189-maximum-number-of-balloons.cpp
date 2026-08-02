class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int>have;
        for(int i=0;i<text.size();i++){
            have[text[i]]++;
        }
        string s="balloon";
        unordered_map<char,int>need;
        need['b']=1;
        need['a']=1;
        need['l']=2;
        need['o']=2;
        need['n']=1;
        int res=INT_MAX;
        for(auto i:need){
            char c=i.first;
            int freqNeed=i.second;
            int freqHave=have[c];
            int times=freqHave/freqNeed;
            res=min(res,times);
        }
        return res;
    }
};