class Solution {
public:
    int can(vector<int>& arr,int dist, int cows){
        int count =1,last = arr[0];
        for(int i =1;i<arr.size();i++){
           if(arr[i]-last>=dist){
            count ++;
            last = arr[i];
           }
        }
        if(count>= cows){
            return true;
        }
        else return false;
    }



    int maxDistance(vector<int>& arr, int cows) {
        sort(arr.begin(),arr.end());
        int low = 0, high = arr[arr.size()-1] - arr[0];
        while(low <= high){
            int mid =(low+high)/2;
            if(can(arr,mid,cows )==true){
                low = mid+1;
            }
            else 
            {
                high = mid-1;
            }
        }
        return high;
    }
};