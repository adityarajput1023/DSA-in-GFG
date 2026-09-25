class Solution {
  public:
    bool isPalindrome(int n) {
        // code here
        int ans=0,rem;
        int x=n;
        while(n){
            rem=n%10;
            n/=10;
            ans=ans*10+rem;
        }
            if(x==ans)
        return 1;
        else 
        return 0;
        
    }
};