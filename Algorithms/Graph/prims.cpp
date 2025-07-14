#include<bits/stdc++.h>
using namespace std;
#define P pair<int,int>
class Solution {
public:
    int primsAlgorithm(vector<vector<pair<int,int>>>& adj) {
        
        int n = adj.size();
       
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