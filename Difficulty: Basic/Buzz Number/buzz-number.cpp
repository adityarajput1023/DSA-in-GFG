class Solution {
  public:
    bool isBuzz(int n) {
        //  code here
        if(n%7==0 || n%10==7)
        return 1;
        else 
        return 0;
    }
};