// lc 1631

#include<bits/stdc++.h>
using namespace std;

#define P pair<int , pair<int,int>>
class Solution {
public:

    bool isSafe(int i , int j , int m , int n ,vector<vector<int>>& heights){
        return (i >= 0 && i < m  && j >= 0 && j < n);
    }
    int minimumEffortPath(vector<vector<int>>& heights) {

        int m = heights.size();
        int n = heights[0].size();
      
        priority_queue< P , vector<P> , greater<P>> pq;
        pq.push({0 , {m-1 , n-1}});

        vector<vector<int>> distance(m , vector<int>(n , INT_MAX));

        
        int dx[] = {-1 ,0 , 1 , 0 };
        int dy[] = {0 , 1 , 0  , -1};

        while(!pq.empty()){
            auto top = pq.top(); pq.pop();
            int dist = top.first;
            int x = top.second.first;
            int y = top.second.second;
            if(x ==0 && y == 0) return dist;
            for(int i = 0 ; i < 4 ; i++){
                int nx = x + dx[i];
                int ny = y + dy[i];

                if(isSafe(nx,ny, m , n , heights)){

                    int effort = max(dist, abs(heights[x][y] - heights[nx][ny]));
                    if(effort < distance[nx][ny]) {
                        distance[nx][ny] = effort;
                        pq.push({effort, {nx, ny}});
                    }

                }
            }
            
            
        }
        return 0;
    }
};