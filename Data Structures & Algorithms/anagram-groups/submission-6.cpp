class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // std::unordered_map<string, std::vector<string>> sortedStrs;
        // for (int i = 0; i < strs.size(); ++i)
        // {
        //     auto str = strs[i];
        //     std::sort(str.begin(), str.end());
        //     sortedStrs[str].push_back(strs[i]);
        // }

        // std::vector<std::vector<std::string>> res;
        // for (auto [key, strs] : sortedStrs)
        //     res.push_back(strs);
        // return res;

        std::unordered_map<std::string, std::vector<string>> keyVsStrs;
        for (auto & str : strs)
        {
            std::vector<int> key(26, 0);
            for (int i = 0 ; i < str.size() ; ++i)
                key[str[i] - 'a']++;
            
            std::string strKey;
            for (auto val : key)
                strKey += ',' + std::to_string(val);
            
            keyVsStrs[strKey].push_back(str);
        }

        std::vector<std::vector<std::string>> res;
        for (auto [key, strs] : keyVsStrs)
            res.push_back(strs);
        return res;
    }
};
