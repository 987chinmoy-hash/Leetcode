
class Solution {
private:
    int merge(vector<int>& nums, int left, int mid, int right) {
        int count = 0;
        int j = mid + 1;
        
        // Count reverse pairs where nums[i] > 2LL * nums[j]
        for (int i = left; i <= mid; i++) {
            while (j <= right && (long long)nums[i] > 2LL * nums[j]) {
                j++;
            }
            count += (j - (mid + 1));
        }
        
        // Standard merge step
        vector<int> temp;
        int leftPtr = left, rightPtr = mid + 1;
        
        while (leftPtr <= mid && rightPtr <= right) {
            if (nums[leftPtr] <= nums[rightPtr]) {
                temp.push_back(nums[leftPtr++]);
            } else {
                temp.push_back(nums[rightPtr++]);
            }
        }
        
        while (leftPtr <= mid) {
            temp.push_back(nums[leftPtr++]);
        }
        
        while (rightPtr <= right) {
            temp.push_back(nums[rightPtr++]);
        }
        
        for (int i = left; i <= right; i++) {
            nums[i] = temp[i - left];
        }
        
        return count;
    }
    
    int mergeSort(vector<int>& nums, int left, int right) {
        if (left >= right) return 0;
        int mid = left + (right - left) / 2;
        int count = 0;
        
        count += mergeSort(nums, left, mid);
        count += mergeSort(nums, mid + 1, right);
        count += merge(nums, left, mid, right);
        
        return count;
    }

public:
    int reversePairs(vector<int>& nums) {
        if (nums.empty()) return 0;
        return mergeSort(nums, 0, nums.size() - 1);
    }
};
