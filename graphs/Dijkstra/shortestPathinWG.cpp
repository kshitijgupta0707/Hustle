#include<bits/stdc++.h>
using namespace std;

#define P pair<int,int>
class Solution {
  public:
    vector<int> shortestPath(int n, vector<vector<int>>& edges) {
    
        vector<vector<P>> adj(n);

        int e = edges.size();
        for(int i = 0 ;i < e ; i++){
            adj[edges[i][0]].push_back({edges[i][1] , edges[i][2]});
            adj[edges[i][1]].push_back({edges[i][0] , edges[i][2]});
        }
        
        priority_queue< P , vector<P> , greater<P>> pq;
        pq.push({0 , 0});

        vector<int> distance(n , INT_MAX);
        vector<int> parent(n);

        distance[0] = 0;
        for(int i = 0 ; i < n ; i++){
            parent[i] = i;
        }
        while(!pq.empty()){
            auto top = pq.top(); pq.pop();
            int dist = top.first;
            int node = top.second;
            
            for(auto it : adj[node]){
                int v = it.first;
                int w = it.second;
                if(w + dist < distance[v]){
                    distance[v] = w + dist;
                    parent[v] = node;
                    pq.push({distance[v] , v });
                }
            }
        }

        if (distance[n-1] == INT_MAX) return {-1};  

        vector<int> ans;
        int node = n-1;
        while(parent[node] != node){
            ans.push_back(node);
            node = parent[node];
        }
        ans.push_back(0);
        reverse(ans.begin() , ans.end());
        return ans;
    }
};