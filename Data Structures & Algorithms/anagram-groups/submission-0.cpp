class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<string, std::vector<string>> sortedStrs;
        for (int i = 0; i < strs.size(); ++i)
        {
            auto str = strs[i];
            std::sort(str.begin(), str.end());
            auto itr = sortedStrs.find(str);
            if (itr != sortedStrs.end())
            {
                itr->second.push_back(strs[i]);
            }
            else
            {
                sortedStrs.emplace(str, std::vector<std::string>{strs[i]}); // Error here?
            }
                
        }

        std::vector<std::vector<std::string>> res;
        for (auto [key, strs] : sortedStrs)
            res.push_back(strs);
        return res;
    }
};
