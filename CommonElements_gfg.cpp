class Solution {
  public:
    vector<int> commonElements(vector<int> &a, vector<int> &b) {
        // code here
        vector<int>ans;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int n= a.size();
        int m = b.size();
        int i=0,j=0;
        while(i<n && j<m){
            if(a[i]<b[j]) i++;
            else if(a[i]>b[j]) j++;
            else{
                ans.push_back(a[i]);
                i++;
                j++;
            }
            
        }
        return ans;
    }
};