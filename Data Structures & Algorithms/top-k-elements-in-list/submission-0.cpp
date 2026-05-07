class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> result;
        unordered_map<int,int> freq;
        for(int num:nums){
            freq[num]++;
        }   
         vector<vector<int>> bucket(nums.size() + 1);

        for (auto& pair : freq) {
            bucket[pair.second].push_back(pair.first);
        }
        for (int i = bucket.size() - 1; i >= 0 && result.size() < k; i--) {
            for (int num : bucket[i]) {
                result.push_back(num);
                if (result.size() == k)
                    break;
            }
        }
        return result;     
    }
};
