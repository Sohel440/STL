  vector<int> parent;
    vector<int> rank;
    
    int find (int x){
        if(x == parent[x]){
            return x;
        }
        return parent[x] = find(parent[x]);
    }
    void Union(int x , int y){
        
        int px = find(x);
        int py = find(y);
        
        if(py == px){
            return;
        }
        
        if(rank[px] > rank[py]){
            parent[py] = px;
        }else if(rank[px] < rank[py]){
            parent[px] = py;
         }else{
             parent[px] = py;
             rank[py]++;
             
         }
    }
