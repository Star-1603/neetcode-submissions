class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>> indexedNums;
        for (int k = 0; k < nums.size(); k++) {
            indexedNums.push_back({nums[k], k});
        }
        vector<int> result;
        sort(indexedNums.begin(),indexedNums.end());
        int sum=0;
        int i=0;
        int j=nums.size()-1;
        while(i<j){
            sum=indexedNums[i].first+indexedNums[j].first;
            if(sum==target){
                result.push_back(min(indexedNums[i].second, indexedNums[j].second));
                result.push_back(max(indexedNums[i].second, indexedNums[j].second));
                break;
            }
            if(sum>target){
                j--;
            }
            else if(sum<target){
                i++;
            }
        }
        return result;
    }
};
