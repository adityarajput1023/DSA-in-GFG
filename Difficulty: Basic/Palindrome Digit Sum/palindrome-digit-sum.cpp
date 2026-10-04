class Solution {
  public:
    bool isDigitSumPalindrome(int n) {
        // code here
        int sum=0,rem,r,ans=0;
        while(n!=0){
            rem=n%10;
            sum+=rem;
            n/=10;
        }
        int temp=sum;
        
        while(temp!=0){
            r=temp%10;
            temp/=10;
            ans=ans*10+r;
        }
        if(sum==ans)
        return 1;
        else 
        return 0;
    }
};