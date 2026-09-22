class Solution {
public:
    struct cmp {
        bool operator()(const pair<int, char>& a, const pair<int, char>& b) {
            if (a.first == b.first)
                return a.second < b.second;
            return a.first < b.first;
        }
    };

    string reorganizeString(string s) {
        unordered_map<char, int> freq;
        for (char c : s)
            freq[c]++;
        priority_queue<pair<int, char>, vector<pair<int, char>>, cmp> pq;
        for (auto p : freq)
            pq.push({p.second, p.first});
        string res = "";
        while (!pq.empty()) {
            pair<int, char> p = pq.top();
            pq.pop();
            if (!res.empty() && res.back() == p.second) {
                if (pq.empty())
                    return "";
                pair<int, char> p2 = pq.top();
                pq.pop();
                res.push_back(p2.second);
                p2.first--;
                if (p2.first > 0)
                    pq.push(p2);
                pq.push(p);
            } else {
                res.push_back(p.second);
                p.first--;
                if (p.first > 0)
                    pq.push(p);
            }
        }
        return res;
    }
};