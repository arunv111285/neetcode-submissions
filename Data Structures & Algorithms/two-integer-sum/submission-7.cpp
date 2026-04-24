class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        // std::vector<std::pair<int,int>> numsWithIndices;
        // for (int i =0 ; i < nums.size() ; ++i)
        // {
        //     numsWithIndices.emplace_back(nums[i], i);
        // }

        // std::sort(numsWithIndices.begin(), numsWithIndices.end());
        // int front = 0; 
        // int back = numsWithIndices.size() - 1;
        // while (back > front)
        // {
        //     const auto cur = numsWithIndices[front].first + numsWithIndices[back].first;
        //     if (cur == target)
        //     {
        //         const auto lowerIndex = min(numsWithIndices[front].second, numsWithIndices[back].second);
        //         const auto upperIndex = max(numsWithIndices[front].second, numsWithIndices[back].second);

        //         return {lowerIndex, upperIndex};
        //     }
        //     else if (abs(numsWithIndices[front].first) + abs(numsWithIndices[back].first) > abs(target))
        //     {
        //         --back;
        //     }
        //     else
        //     {
        //         ++front;
        //     }
        // }
        // return {};

        vector<pair<int, int>> A;
        for (int i = 0; i < nums.size(); i++) {
            A.push_back({nums[i], i});
        }

        sort(A.begin(), A.end());

        int i = 0, j = nums.size() - 1;
        while (i < j) {
            int cur = A[i].first + A[j].first;
            if (cur == target) {
                return {min(A[i].second, A[j].second),
                        max(A[i].second, A[j].second)};
            } else if (cur < target) {
                i++;
            } else {
                j--;
            }
        }
        return {};
    }
};
