class Solution {
  public:
    int nthTerm(int a, int r, int n) {
        // code here
      long long mod = 1000000007;
             long long ans = a;
             long long base = r;
             int p = n - 1;

             while (p > 0) {
                 if (p % 2 == 1)
                     ans = (ans * base) % mod;

                 base = (base * base) % mod;
                 p = p / 2;
             }

             return ans;
    }
};