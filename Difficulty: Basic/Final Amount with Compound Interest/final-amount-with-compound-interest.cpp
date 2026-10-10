class Solution {
  public:
    int calculateFutureValue(int p, int t, int n, int r) {
        // code here
         double A = floor(p * pow(1.0 + (double)r / (100 * n), n * t));
                 return (int)A;
    }
};