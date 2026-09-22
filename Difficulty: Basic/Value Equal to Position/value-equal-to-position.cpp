class Solution {
  public:
    vector<int> valEqualToPos(vector<int>& arr) {
        // code here
        int count=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==i+1){
            arr[count]=arr[i];
            count++;
            }
        }
        arr.resize(count);
        return arr;
    }
};