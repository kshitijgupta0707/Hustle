#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a , n, m;
        cin >> a >> n >> m;
        if( n > m){
             swap(n, m);
        }
        if(a >= n &&  a <= m){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
}