class Solution {
  public:
    vector<int> getMinMax(vector<int> &arr) {
        // code here
        int ansmin=INT_MAX;
        for(int i=0;i<arr.size();i++){
            if(arr[i]<ansmin)
            ansmin=arr[i];
        }
        
        int ansmax=INT_MIN;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>ansmax)
            ansmax=arr[i];
        }
        return {ansmin,ansmax};
        
    }
};