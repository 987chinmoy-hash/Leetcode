class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int, int> sum;
        int n= nums.size();
        int left =0,right=0;
        int maxlen = 0;
        while(right<n){

            sum[nums[right]]++;
            while(sum[nums[right]]>k){
                sum[nums[left]]--;
                left++;
            }
            
            maxlen = max(maxlen,right -left+1);
            
            right++;
            
        }
        return maxlen;
    }
};