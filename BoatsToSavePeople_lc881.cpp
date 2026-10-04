class Solution {
public:
    int numRescueBoats(vector<int>& arr, int limit) {
        sort(arr.begin(),arr.end());
        int boats=0;
        int n=arr.size();
        int i=0,j=n-1;
        while(i<=j){
            if(arr[i]+arr[j]>limit){
                boats++;
                j--;
            } 
            else{
                boats++;
                i++;
                j--;
            }
        }
        return boats;       
    }
};