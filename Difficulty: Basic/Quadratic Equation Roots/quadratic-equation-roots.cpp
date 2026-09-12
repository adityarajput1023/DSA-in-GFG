class Solution {
  public:
    vector<int> quadraticRoots(int a, int b, int c) {
        // code here
        int d=b*b-4*a*c ;
         if(d<0)
         return {-1};
         
         int x,y;
         x= floor((-b+sqrt(d))/(2*a));
         y= floor((-b-sqrt(d))/(2*a));
         
         if(x<y)
         swap(x,y);
         
         return {x ,y};
         
         
        
    }
};