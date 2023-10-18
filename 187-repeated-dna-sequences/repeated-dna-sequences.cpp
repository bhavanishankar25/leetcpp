class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        int i, n = s.size();
        vector<string> ans;
        if(n <= 10)
            return ans;
        string sp = "";
        unordered_map<string, int> um;
        for(i = 0; i < 9; i++)
        {
            sp += s[i];
        }
        for( ;i < n; i++)
        {
            sp += s[i];
            um[sp]++;
            sp.erase(0,1);
        }
        for(auto &[f, sn] : um)
        {
            if(sn >= 2)
                ans.push_back(f);
        }
        return ans;
    }
};