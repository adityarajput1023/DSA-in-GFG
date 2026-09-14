class Solution {
  public:
    int sumOfGP(int n, int a, int r) {
        // code here
        if(r==1)
        return a*n;
       int sum= (a*(1-pow(r,n)))/(1-r);
        return sum;
    }
};