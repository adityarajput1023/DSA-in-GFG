class Solution {
  public:
    int sumOfAP(int n, int a, int d) {
        // Code here.
        int sum=0;
        sum= ((2*a+(n-1)*d)*(n)) /2;
        
        return sum;
    }
};