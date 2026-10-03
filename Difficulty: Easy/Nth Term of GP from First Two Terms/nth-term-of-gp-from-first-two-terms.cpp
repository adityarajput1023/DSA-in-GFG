class Solution {
  public:
    int termOfGP(int a, int b, int n) {
        // code here
        return a*pow((double)b/a ,n-1);
    }
};