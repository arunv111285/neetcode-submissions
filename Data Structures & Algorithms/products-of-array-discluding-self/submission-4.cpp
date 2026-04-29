class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        std::vector<int> results;
        // for (int i = 0 ; i < nums.size() ; ++i)
        // {
        //     int prod = 1;
        //     for (int j = 0; j < nums.size(); ++j)
        //     {
        //         if (j != i)
        //             prod *= nums[j];
        //     }
        //     results.push_back(prod);
        // }
        results.resize(nums.size());
        int totalProd = 1;
        int zeroCount = 0;
        for (auto val : nums)
        {
            if (val != 0)
                totalProd *= val;
            else
                ++zeroCount;
        }

        if (zeroCount > 1)
            return results;
        else
        {
            for (int i = 0 ; i < nums.size() ; ++i)
            {
                if ((zeroCount == 1) && (nums[i] != 0))
                    results[i] = 0;
                else if (nums[i] != 0)
                    results[i] = totalProd/nums[i];
                else
                    results[i] = totalProd;
            }
        }
        
        

        return results;
    }
};
