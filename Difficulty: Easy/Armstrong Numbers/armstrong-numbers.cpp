class Solution {
  public:
    bool armstrongNumber(int n) {
        // code here
        int rem, num=n, ans=0;
        while(n){
            
                rem=n%10;
                n/=10;
               ans+= pow(rem,3);
            
        }
            if(ans==num)
            return 1;
            else 
            return 0;
    }
};