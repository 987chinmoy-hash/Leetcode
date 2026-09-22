class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> a(nums.size(),0);
        int po =0,ne =1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                a[ne] = nums[i];
                ne +=2;
            }
            else{
                a[po]=nums[i];
                po +=2;
            }
        }
        return a;
    }
};