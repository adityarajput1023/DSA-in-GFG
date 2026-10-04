class Solution {
  public:
    int cubeRoot(int n) {
        // code here
        int i = 0;

               while ((i + 1) * (i + 1) * (i + 1) <= n) {
                   i++;
               }

               return i;
    }
};