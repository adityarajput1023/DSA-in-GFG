class Solution {
  public:
    int closestNumber(int n, int m) {
        // code here
       int a = (n / m) * m;
               int b;

               if (n >= 0)
                   b = a + abs(m);
               else
                   b = a - abs(m);

               if (abs(n - a) < abs(n - b))
                   return a;
               else if (abs(n - a) > abs(n - b))
                   return b;
               else
                   return abs(a) > abs(b) ? a : b;
    }
};