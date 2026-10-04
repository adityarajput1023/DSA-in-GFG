class Solution {
  public:
    int kthDigit(int a, int b, int k) {
        // code here
       long long num = 1;

              for (int i = 0; i < b; i++) {
                  num *= a;
              }

              for (int i = 1; i < k; i++) {
                  num /= 10;
              }

              return num % 10;
        
    }
};