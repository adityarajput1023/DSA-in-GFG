class Solution {
  public:
    bool isPowerofTwo(int n) {
        // code here
        for(int i=0;i<=n;i++){
        if(n==pow(2,i))
        return 1;
        }
        return 0;
    }
};