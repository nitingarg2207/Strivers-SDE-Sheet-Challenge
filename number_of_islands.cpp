class Solution {
public:
    vector<pair<int,int>> movements={{-1,0},{1,0},{0,-1},{0,1}};

    void dfs(int i,int j,vector<vector<char>> &grid,vector<vector<bool>> &visited){
        visited[i][j]=1;
        for(int ind=0;ind<movements.size();ind++){
            int x=i+movements[ind].first;
            int y=j+movements[ind].second;
            if(x<0 || y<0 || x>=grid.size() || y>=grid[0].size()) continue;
            if(visited[x][y] || grid[x][y]=='0') continue;
            dfs(x,y,grid,visited);
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int count=0;
        vector<vector<bool>> visited(m+1,vector<bool>(n+1,false));
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(visited[i][j]) continue;
                if(grid[i][j]=='0') continue;
                count++;
                dfs(i,j,grid,visited);
            }
        }
        return count;
    }
};