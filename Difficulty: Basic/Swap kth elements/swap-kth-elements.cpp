
class Solution {
  public:
    void swapKth(vector<int> &arr, int k) {
        // code here
        int temp;
       
            temp=arr[k-1];
            arr[k-1]=arr[arr.size()-k];
            arr[arr.size()-k]=temp;
            
        
        
    }
};
