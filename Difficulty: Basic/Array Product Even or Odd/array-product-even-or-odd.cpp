class Solution {
  public:
    bool isProductEven(vector<int> &arr) {
        // code here
        int mul=1;
        for(int i=0;i<arr.size();i++){
            mul*=arr[i];
        }
        if(mul%2==0)
        return 1;
        else 
        return 0;
    }
};