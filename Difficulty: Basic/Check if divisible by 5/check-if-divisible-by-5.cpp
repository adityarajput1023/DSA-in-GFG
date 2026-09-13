class Solution {
  public:
    bool divisibleBy5(string &n) {
        // code here
          return n[n.size() - 1] == '0' || n[n.size() - 1] == '5';
        
    }
};