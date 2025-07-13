#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        string s ; cin >> s;
        
        int c = 0;
        for(auto i : s){
            if(i == '1'){
                c++;
            }
        }
    
        if(k > n/2){
            cout << "Alice" << endl;
        }
        else if(c <= k) cout << "Alice" << endl;
        else cout << "Bob" << endl;
    }

}