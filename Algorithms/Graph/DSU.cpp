#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> parent;
    vector<int> rank;
    int find(int node){
        if(parent[node] == node) return node;
        return parent[node] = find(parent[node]);
    }
    void Union(int x , int y){  
        int px = find(x);
        int py = find(y);
        if(px == py) return;

        if(rank[px] > rank[py]){
            parent[py] = px;
        }
        else if(rank[px] < rank[py]){
            parent[px] = py;
        }
        else{
            parent[px] = py;
            rank[py]++;
        }
       }
 

};