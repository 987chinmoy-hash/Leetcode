class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int found =0 ;
        for(int i =0;i<nums.size();i++){
            if(nums[i]==target){
                found = 1;
            }

        }
        if(found==0) return false;
        else return true;
    }
};