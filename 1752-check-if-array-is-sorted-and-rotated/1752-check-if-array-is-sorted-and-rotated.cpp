class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0;
        int n = nums.size();
        
        for (int i = 0; i < n; i++) {
            // Check adjacent elements using modulo % n to wrap around to the start
            if (nums[i] > nums[(i + 1) % n]) {
                count++;
            }
            // If there's more than 1 drop, it's not sorted and rotated
            if (count > 1) {
                return false;
            }
        }
        
        return true;
    }
};