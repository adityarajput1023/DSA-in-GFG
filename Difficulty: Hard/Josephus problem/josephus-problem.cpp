class Solution {
  public:
    int josephus(int n, int k) {
        // code here
        int ans = 1;

              for(int i = 2; i <= n; i++) {
                  ans = (ans + k - 1) % i + 1;
              }

              return ans;
    }
};