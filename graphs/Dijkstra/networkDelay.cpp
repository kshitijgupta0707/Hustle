// lc 743

#include<bits/stdc++.h>
using namespace std;
#define P pair<int,int>

class Solution {
public:
    int networkDelayTime(vector<vector<int>>& edges, int n, int k) {
         vector<vector<P>> adj(n+1);

        int e = edges.size();
        for(int i = 0 ;i < e ; i++){
            adj[edges[i][0]].push_back({edges[i][1] , edges[i][2]});
        }
        
        priority_queue< P , vector<P> , greater<P>> pq;
        pq.push({0 , k});

        vector<int> distance(n+1 , INT_MAX);
        distance[0] = 0;
        distance[k] = 0;
     
        while(!pq.empty()){
            auto top = pq.top(); pq.pop();
            int dist = top.first;
            int node = top.second;
            
            for(auto it : adj[node]){
                int v = it.first;
                int w = it.second;
                if(w + dist < distance[v]){
                    distance[v] = w + dist;
                    pq.push({distance[v] , v });
                }
            }
        }

        int ans = *max_element(distance.begin() , distance.end());

        if(ans == INT_MAX) return -1;
        else{
            return ans;
        }
    }
};