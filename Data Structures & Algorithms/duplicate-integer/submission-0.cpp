class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        std::unordered_set<int> unique;
        for (auto val : nums)
        {
            auto res = unique.insert(val);
            if (!res.second)
                return true;
        }
        return false;
    }
};