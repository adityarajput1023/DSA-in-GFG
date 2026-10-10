class Solution {
  public:
    int findFinger(int n) {
        // code here
        int pos = (n - 1) % 8;

                if (pos == 0)
                    return 1;
                else if (pos == 1 || pos == 7)
                    return 2;
                else if (pos == 2 || pos == 6)
                    return 3;
                else if (pos == 3 || pos == 5)
                    return 4;
                else
                    return 5;
    }
};