#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int ans = INT_MAX;
        for(int i = 1 ; i < n ; i++){
            if(abs(a[i] - a[i - 1]) <= 1){
                ans = min(ans, 0);
            }
        }
        if(ans == 0){
            cout << 0 << endl;
            continue;
        }


        for(int i = n-2 ;i >= 0 ;i--){
            //range
            int s = min(a[i], a[i + 1]) - 1;
            int e = max(a[i], a[i + 1]) + 1;


            for(int j = i-1; j >= 0 ;j--){
                if(a[j] >= s && a[j] <= e){
                    ans = min(ans, i - j );
                }
            }
        }
        for(int i = 1 ;i < n ;i++){
            //range
            int s = min(a[i], a[i - 1]) - 1;
            int e = max(a[i], a[i - 1]) + 1;


            for(int j = i+1; j < n ;j++){
                if(a[j] >= s && a[j] <= e){
                    ans = min(ans, j - i );
                }
            }
        }
        if(ans == INT_MAX){
            cout << -1 << endl;
        } else {
            cout << ans << endl;
        }

   }
}