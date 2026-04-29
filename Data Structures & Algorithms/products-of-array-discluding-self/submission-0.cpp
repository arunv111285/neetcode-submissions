class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        std::vector<int> results;
        for (int i = 0 ; i < nums.size() ; ++i)
        {
            int prod = 1;
            for (int j = 0; j < nums.size(); ++j)
            {
                if (j != i)
                    prod *= nums[j];
            }
            results.push_back(prod);
        }
        return results;
    }
};
