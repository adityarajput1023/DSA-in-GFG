class Solution {
  public:
    bool isDivBy8(string &s) {
        // code here
       int n = s.size();

              if(n == 1)
                  return (s[0] - '0') % 8 == 0;

              if(n == 2)
                  return stoi(s) % 8 == 0;

              int num = (s[n-3] - '0') * 100 +
                        (s[n-2] - '0') * 10 +
                        (s[n-1] - '0');

              return num % 8 == 0;
    }
};