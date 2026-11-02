class Solution {
  public:
    int largestSumCycle(vector<int>& edge) {
        // code here
        int N=edge.size();
        vector<int> vis(N,0);
        vector<int> path(N,0);
        
        long long ans = -1 ;
        
        for(int i=0; i<N ; i++){
            if(vis[i]) 
            continue;
       
        
        int node = i;
        
        while(node != -1 && !vis[node]){
            vis[node] =1 ;
            path[node] = i+1;
            node = edge[node] ;
            
        }
        
        if(node!= -1 && path[node] == i+1){
            long long sum =0;
            int start = node ;
            
            do{
                sum+= node;
                node = edge[node];
                
            }while( node !=start);
            ans = max(ans, sum);
        }
        }
        return (int)ans;
    }
};