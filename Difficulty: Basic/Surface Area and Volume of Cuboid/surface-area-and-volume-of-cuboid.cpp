class Solution {
  public:
    vector<int> find(int l, int b, int h) {
        // code here
        int sa=2*(l*b + b*h + h*l);
        int v= l*b*h;
        return {sa, v};
        }
};