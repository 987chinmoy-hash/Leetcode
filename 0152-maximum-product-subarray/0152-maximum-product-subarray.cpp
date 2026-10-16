class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if (nums.empty()) return 0;
        
        int max_prod = nums[0];
        int min_prod = nums[0];
        int result = nums[0];
        
        for (int i = 1; i < nums.size(); ++i) {
            int curr = nums[i];
            
            // If we encounter a negative number, max and min products swap
            if (curr < 0) {
                swap(max_prod, min_prod);
            }
            
            max_prod = max(curr, max_prod * curr);
            min_prod = min(curr, min_prod * curr);
            
            result = max(result, max_prod);
        }
        
        return result;
    }
};