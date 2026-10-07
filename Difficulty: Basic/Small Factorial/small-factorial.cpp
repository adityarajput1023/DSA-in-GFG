
class Solution {
  public:
    long long int find_fact(int n) {
        // Code here.
        long long  fact=1;
        for(int i=2;i<=n;i++){
        
        fact*=i;
        
            
        }
        return fact;
    }
};