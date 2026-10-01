class Solution {
  public:
    bool isPower(int x, int y) {
        // code here
  double p = log10(y) / log10(x);

         return abs(p - round(p)) < 0.000001;
    }
};