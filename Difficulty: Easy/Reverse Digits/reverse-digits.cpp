class Solution {
  public:
    int reverseDigits(int n) {
        // Code here
        int rem, ans=0,mul=10;
        while(n){
            rem=n%10;
            n/=10;
            ans=ans*mul +rem;
            
        }
        return ans;
    }
};