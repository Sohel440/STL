 
void dfs(int source, int des, int &count, vector<int> adj[]){
    if(source==des){
        count++;
    }
    for(auto it: adj[source]){
        dfs(it,des,count,adj);
    }
}
int possible_paths(vector<vector<int>>edges, int n, int s, int d){
    // Code here
    vector<int> adj[n];
    for(auto x: edges)
        adj[x[0]].push_back(x[1]);
    int count = 0;
    dfs(s,d,count,adj);
    return count;
}
 
};
