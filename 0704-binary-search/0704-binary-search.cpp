class Solution {
public:
    int search(vector<int>& nums, int target, int low, int high) {
        if (low > high) return -1;
        int mid = low + (high - low) / 2;
        
        if (nums[mid] == target) return mid;
        
        if (nums[mid] > target) {
            return search(nums, target, low, mid - 1); 
        } 
        
        return search(nums, target, mid + 1, high);    
    }
    
    // LeetCode's main entry point wrapper
    int search(vector<int>& nums, int target) {
        return search(nums, target, 0, nums.size() - 1);
    }
};