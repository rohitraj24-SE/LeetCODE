class Solution {
public:
    void fun(string& s, int n, int idx, string& dairy, vector<string>& res,
             unordered_map<char, string>& f) {
        if (idx == n) {
            res.push_back(dairy);
            return;
        }
        string choice = f[s[idx]];
        for (int j = 0; j < choice.size(); j++) {
            dairy.push_back(choice[j]);
            fun(s, n, idx + 1, dairy, res, f);
            dairy.pop_back();
        }
        return;
    }
    vector<string> letterCombinations(string digits) {
        vector<string> res;
        string dairy = "";
        int idx = 0;
        int n = digits.size();
        unordered_map<char, string> f;
        f['2'] = "abc";
        f['3'] = "def";
        f['4'] = "ghi";
        f['5'] = "jkl";
        f['6'] = "mno";
        f['7'] = "pqrs";
        f['8'] = "tuv";
        f['9'] = "wxyz";
        fun(digits, n, idx, dairy, res, f);
        return res;
    }
};