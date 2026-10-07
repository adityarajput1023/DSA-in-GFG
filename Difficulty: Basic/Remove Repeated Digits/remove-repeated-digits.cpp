long long int modify(long long int n) {
    // code here
    long long int ans = 0;
       long long int place = 1;
       int prev = -1;

       while (n > 0) {
           int digit = n % 10;
           n = n / 10;

           if (digit != prev) {
               ans = ans + digit * place;
               place = place * 10;
               prev = digit;
           }
       }

       return ans;
}