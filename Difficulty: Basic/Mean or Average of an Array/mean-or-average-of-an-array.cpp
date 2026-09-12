class Solution {
  public:
    int findMean(vector<int>& arr) {
        // code here
        int sum=0,i;
        for(i=0;i<arr.size();i++){
            sum+=arr[i];
        }
        return sum/arr.size();
    }
};