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
        sort(a.begin(), a.end());
        int maximum = *max_element(a.begin(), a.end());

        int cnt = 0;
        for(int i = 0 ; i < n ; i++){
            for(int j = i+1 ; j < n ; j++){
                for(int k = j+1 ; k < n ; k++){
                    int maxi = max(a[i], max(a[j], a[k]));
                    int sum = a[i] + a[j] + a[k];
                    if(maxi == maximum){
                        if(sum - maxi > maxi){
                            cnt += 1;
                        }
                    }
                    else if(sum - maxi > maxi && sum > maximum){
                        cnt +=1;
                    }
                }
            }
        }

        cout << cnt << endl;
   }
}