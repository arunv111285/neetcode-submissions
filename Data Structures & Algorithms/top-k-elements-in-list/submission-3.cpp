class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        std::unordered_map<int, int> valVsCount;
        for (auto num : nums)
        {
            valVsCount[num]++;
        }
        
        std::vector<int> results;
        // std::multimap<int, int, std::greater<int>> countVsVals;
        // for (auto [val, count] : valVsCount)
        // {
        //     countVsVals.insert({count, val});
        // }   
        // int index = 0; 
        
        // for (auto [count, val] : countVsVals)
        // {
        //     if (index == k)
        //         break;
        //     results.push_back(val);
        //     index++;
        // }    

        std::priority_queue<std::pair<int,int>, std::vector<std::pair<int,int>>, std::greater<std::pair<int, int>>> heap;
        for (auto [val, count] : valVsCount)
        {
            heap.push({count, val});
            if (heap.size() > k)
                heap.pop();
        }

        for (int i = 0; i < k ; ++i)
        {
             results.push_back(heap.top().second);
             heap.pop();
        }   
        return results;
    }
};
