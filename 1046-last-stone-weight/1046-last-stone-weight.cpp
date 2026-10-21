class Solution {
public:
    int lastStoneWeight(vector<int>& nums) {
        while(nums.size()>1){
            sort(nums.begin(), nums.end());
            nums[nums.size() - 2] = nums.back() - nums[nums.size() - 2];
            nums.pop_back();
        
        }
        return nums.empty() ? 0 : nums[0];
    }
};