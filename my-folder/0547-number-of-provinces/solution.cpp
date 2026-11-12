class Solution{
private:
    void dfs(int V, vector<int>adjLs[], vector<int>&vis, int node){
        vis[node] = 1;
        for(auto it : adjLs[node]){
            if(!vis[it]){
                dfs(V, adjLs, vis, it);
            }
        }
    }
public:
    int findCircleNum(vector<vector<int>> adj) {
        int V = adj.size();
        vector<int>adjLs[V];
       for(int i = 0 ; i < V ; i++){
        for(int j = 0 ; j < V ; j++){
            if(adj[i][j] == 1 && i != j){
                adjLs[i].push_back(j);
                adjLs[j].push_back(i);
            }
        }
       }
       vector<int>vis(V, 0);
       int count = 0;
       for(int i = 0 ; i < V ; i++){
            if(!vis[i]){
                count++;
                dfs(V, adjLs, vis, i);
            }
       }
       return count;
    }
};

