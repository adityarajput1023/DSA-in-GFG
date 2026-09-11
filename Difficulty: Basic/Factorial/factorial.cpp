class Solution {
  public:
    int factorial(int n) {
        // code here
         int factorial=1;
        for (int i=1;i<=n;i++){
            factorial*=i;
        }
        return factorial;
    }
};