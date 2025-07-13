#include<bits/stdc++.h>
using namespace std;
#define P pair<int,int>

//lc 1091 
class Solution {
public:
    bool isValidMove(int x , int y , vector<vector<int>> & grid){
        int n = grid.size();
        return (x >= 0 && x < n && y >= 0 && y < n && grid[x][y] != 1);    
    }
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        if(grid[n-1][n-1] == 1 || grid[0][0] == 1) return -1;

        //storing {{i , j} , steps} to reach it
        
        queue<pair<pair<int,int> , int>> q;

        int dx[] = {-1 ,-1 , -1 , 0  , 0 , 1 , 1  , 1 };
        int dy[] = {-1 , 0 , 1 , -1  , 1 , -1 , 0 , 1 };

        q.push({{n-1 , n-1} , 1 });

        grid[n-1][n-1] = 1;
        while(!q.empty()){
            auto top = q.front();
            int x = top.first.first;
            int y = top.first.second;
            int steps = top.second;
            q.pop();
            if(x == 0 && y == 0) return steps;

            for(int i = 0 ; i < 8 ; i++){
                int nx = x + dx[i];
                int ny = y + dy[i];
                if(isValidMove(nx,ny,grid)){
                    grid[nx][ny] = 1;
                    q.push({{nx,ny} , steps + 1});
                }
            }
        }

        return -1;
    }

};