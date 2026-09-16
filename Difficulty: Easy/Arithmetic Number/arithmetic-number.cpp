class Solution {
  public:
    int inSequence(int a, int b, int c) {
        // code here
        if (c == 0)
                   return a == b;

               if ((b - a) % c == 0 && (b - a) / c >= 0)
                   return true;

               return false;
    }
};