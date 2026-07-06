class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        sort(nums.begin(),nums.end());
        int res = 0, curr = nums[0], count = 0, i = 0;
        while(i<nums.size()){
            if(curr!=nums[i]){
                curr=nums[i];
                count=0;
            }
            while(i<nums.size() && nums[i]==curr){
                i++;
            }
            count++;
            curr++;
            res=max(res,count);
        }
        return res;
    }
};
