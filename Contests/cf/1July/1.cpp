#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin >> t;
   while(t--){
    int n ;
    cin >> n;
     n = n-1;
     if(n%4 == 3){
        cout << "Bob" << endl;
     }
     else cout << "Alice" << endl;
   }
}