class Solution {
  public:
    vector<int> fibonacciNumbers(int n) {
        // code here
        vector<int> ans;

                int a = 0;
                int b = 1;

                for(int i = 0; i < n; i++) {
                    ans.push_back(a);

                    int c = a + b;
                    a = b;
                    b = c;
                }

                return ans;
    }
};