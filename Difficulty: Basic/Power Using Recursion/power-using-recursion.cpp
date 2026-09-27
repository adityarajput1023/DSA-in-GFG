class Solution {
  public:
    int recursivePower(int n, int p) {
        // code here
        long long ans = 1;

               for(int i = 1; i <= p; i++) {
                   ans = ans * n;
               }

               return ans;
    }
};
