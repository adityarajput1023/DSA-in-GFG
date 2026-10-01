class Solution {
  public:
    int convertFive(int n) {
        // code here
        int ans=0;
        int place=1;
        if(n==0)
        return 5;
        while(n>0){
            int digit=n%10;
            if(digit==0)
            digit=5;
            
            ans=ans+ digit*place;
            place*=10;
            n/=10;
        }
        return ans;
    }
};