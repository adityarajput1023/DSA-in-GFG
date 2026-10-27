class Solution {
  public:
    int getMaxWeight(string &s) {
        // code here
        int n = s.size();
                int prev2 = 0, prev1 = 0;

                for (int i = 1; i < n; i++) {
                    int gain;

                    if (s[i] != s[i - 1])
                        gain = 2;
                    else
                        gain = 1;

                    int curr = max(prev1, prev2 + gain);

                    prev2 = prev1;
                    prev1 = curr;
                }

                return n + prev1;
    }
};
