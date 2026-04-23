class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        // std::unordered_set<int> unique;
        // for (auto val : nums)
        // {
        //     auto res = unique.insert(val);
        //     if (!res.second)
        //         return true;
        // }
        // return false;

        std::sort(nums.begin(), nums.end());
        for (int i = 1; i < nums.size(); ++i)
        {
            if (nums[i] == nums[i-1])
                return true;
        }
        return false;
    }
};