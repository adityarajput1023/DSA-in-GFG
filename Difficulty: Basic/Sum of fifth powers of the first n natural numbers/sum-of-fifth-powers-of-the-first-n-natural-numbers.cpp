class Solution {
  public:
    int sumOfFifthPowers(int n) {
        // Code here
        int sum=0,p;
        while(n>0){
             p=pow(n,5);
            sum+=p;
            n--;
        }
        return sum;
    }
};