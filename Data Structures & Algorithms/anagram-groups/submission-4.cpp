class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<string, std::vector<string>> sortedStrs;
        for (int i = 0; i < strs.size(); ++i)
        {
            auto str = strs[i];
            std::sort(str.begin(), str.end());
            sortedStrs[str].push_back(strs[i]);
        }

        std::vector<std::vector<std::string>> res;
        for (auto [key, strs] : sortedStrs)
            res.push_back(strs);
        return res;
    }
};
