#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin >> t;
   while(t--){
    int n , j , k;
    cin >> n >> j >> k;

    j--;

    vector<int> arr(n);
    for(int i = 0 ;i< n ;i++){
        cin >> arr[i];
    }

    int greater = 0;
    int lower = 0;
    int equal = 0;

    for(int i = 0 ; i < n ;i++){
         if(i != j){
            if(arr[i] > arr[j]){
                greater++;
            }
            else if(arr[i] == arr[j]){
                equal++;
            }
            else{
                lower++;
            }
         }
    }
    if(greater == 0){
        greater = 1;
    }
    int remove = lower + equal + greater - 1;
    if(n - k <= remove){
     cout << "YES" << endl;
    }
    else cout <<"NO" << endl;
   }
}