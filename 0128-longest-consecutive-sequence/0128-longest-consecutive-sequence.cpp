class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;
        int count  = 1;
        int last_smaller = nums[0];
        int longest = 1;
        sort(nums.begin(),nums.end());
        for(int i= 0; i<nums.size();i++){
            if(nums[i]-1==last_smaller){
                count++;
                last_smaller = nums[i];
               
            }
            else if(last_smaller!=nums[i]){
                count = 1;
                last_smaller = nums[i];
            }
        
        longest = max(longest,count);
        }
        return longest;
    }
};