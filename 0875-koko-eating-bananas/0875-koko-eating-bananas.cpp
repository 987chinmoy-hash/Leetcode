class Solution {
public:
    

    long long totalhours(vector<int>& nums, int h){
        long long totalh=0;
        long long n = nums.size();
        for(int i =0;i<n;i++){
            totalh += (nums[i] + h - 1) / h;
        }
        return totalh;
    }
    int minEatingSpeed(vector<int>& nums, int h) {
    
        int n = nums.size();
        int low =1,high = *max_element(nums.begin(), nums.end()); ;
        while(low<=high){
            int mid =low +(high-low)/2;
            long long totalh = totalhours(nums,mid);
            if(totalh <=h){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return low;
        
    }
};