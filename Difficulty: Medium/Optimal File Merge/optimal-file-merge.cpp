class Solution {
  public:
    int minComputation(vector<int> &files) {
        // code here
        priority_queue<int , vector <int> , greater<int>> pq;
        
        for(int size: files){
            pq.push(size);
            
        }
        
        int totalcost=0;
        
        while(pq.size()>1){
            
            int first = pq.top();
            pq.pop();
            
            int second = pq.top();
            pq.pop();
            
            int merged = first + second ;
            
            totalcost += merged;
            
            pq.push(merged);
             
        }
        return totalcost;
    }
};