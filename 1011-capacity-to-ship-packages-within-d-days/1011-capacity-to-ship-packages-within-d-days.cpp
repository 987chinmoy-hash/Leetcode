class Solution {
public:
    int ma(vector<int>& weights){
        int sum=0;
        for(int i =0;i<weights.size();i++){
            sum +=weights[i];
        }
        return sum;
    }

    int yo(vector<int>& weights,int cap){
        int days =1,load=0;
        for(int i =0;i<weights.size();i++){
            if(load + weights[i] > cap){
                days = days +1;
                load = weights[i];
            }
            else{
                load += weights[i];
            }
        }
        return days;

    }



    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(),weights.end());
        int high = ma(weights);
        while(low<=high){
            int mid = (low+high)/2;
            int nodays = yo(weights,mid);
            if(nodays <= days){
                high = mid-1;
            }
            else{
                low = mid +1;
            }
        }
        return low;
    }
};