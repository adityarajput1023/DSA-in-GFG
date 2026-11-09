class Solution {
  public:
    int getCount(string &s, int k) {
        // code here
        vector<int>count(26,0);
        for(int i=0;i<s.length() ; i++){
            if(i== 0 || s[i]!=s[i-1]){
                count[s[i]-'a']++;
                
            }
        }
        int ans = 0;
        for(int i=0 ;i<26 ;i++){
            if(count[i]==k){
            ans++;}
        }
        
        return ans ;
    }
};