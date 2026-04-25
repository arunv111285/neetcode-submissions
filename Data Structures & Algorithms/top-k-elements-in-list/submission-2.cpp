class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        std::unordered_map<int, int> valVsCount;
        for (auto num : nums)
        {
            valVsCount[num]++;
        }
        
        std::multimap<int, int, std::greater<int>> countVsVals;
        for (auto [val, count] : valVsCount)
        {
            countVsVals.insert({count, val});
        }   
        int index = 0; 
        std::vector<int> results;
        for (auto [count, val] : countVsVals)
        {
            if (index == k)
                break;
            results.push_back(val);
            index++;
        }    
        return results;
    }
};
