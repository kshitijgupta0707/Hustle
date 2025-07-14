// lc 1584

#include<bits/stdc++.h>
using namespace std;

#define P pair<int,int>
class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        
        int n = points.size();
        vector<vector<P>> adj(n);
        for(int i = 0 ;i < n; i++){
            for(int j = i+1 ; j < n ; j++){
                 int a = points[i][0];
                 int b = points[i][1];
                 int c = points[j][0];
                 int d = points[j][1];
                 int distance = abs(a-c) + abs(b - d);

                 adj[i].push_back({j , distance});
                 adj[j].push_back({i , distance});
            }
        }
        vector<int> inMst(n , 0);
         
         priority_queue<P, vector<P> , greater<P>> pq;
         //  cost to reach , node
         pq.push({0 , 0});
         
         int cost = 0;
         
         while(!pq.empty()){
             int wt = pq.top().first;
             int node = pq.top().second;
             pq.pop();
             
             if(inMst[node]) continue;
             
             inMst[node] = true;
             cost += wt;
             
             for(auto v : adj[node]){
                 if(!inMst[v.first]){
                     pq.push({v.second , v.first});
                 }
             }
             
             
         }
         return cost;


        
    }
};