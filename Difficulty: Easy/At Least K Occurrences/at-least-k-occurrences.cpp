class Solution {
  public:
    int firstElementKTime(vector<int>& arr, int k) {
        // code here
        unordered_map<int ,int> fq;
        
        for(int i= 0; i<arr.size(); i++){
            fq[arr[i]]++;
            
            if(fq[arr[i]] == k){
                return arr[i];
            }
        }
        return -1;
    }
};