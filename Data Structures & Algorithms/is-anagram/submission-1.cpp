class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size())
            return false; 

        // std::sort(s.begin(), s.end());
        // std::sort(t.begin(), t.end());
        // return s == t;

        std::unordered_map<char, int> charVsCountS, charVsCountT;
        for (int i = 0 ; i < s.size(); ++i)
        {
            charVsCountS[s[i]]++;
            charVsCountT[t[i]]++;
        }
        return charVsCountS == charVsCountT;
    }
};
