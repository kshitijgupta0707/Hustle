#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin >> t;
   while(t--){
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0 ;i< n ;i++){
        cin >> arr[i];
    }
 
    int smallest = arr[0];


    vector<int> l(n);
    int largest = INT_MIN;
    for(int i = n-1 ;i >= 0; i--){
        l[i] = max(arr[i] , largest);
        largest = max(largest , l[i]);
    }

    string ans = "";
    
    for(int i = 0 ; i < n ;i++){
        // cout << "i = " <<i << endl;
        smallest = min(smallest , arr[i]);
        

        if(smallest < arr[i]){
            // cout << "smallest exits" << endl;
            // cout << smallest << endl;
            //hatane pdega issue toh arr[i] se badda koi ni hona chiye
            // cout << "largest = " << l[i] << endl;
            if(l[i] > arr[i]){
                //    cout << "largest exiss" << l[i] << endl;
                //not possible
                 ans += "0";
               }
               else{
                ans += "1";
               }
        }else{
            // cout << "everythign sorted" << endl;
            ans += "1";
        }
    }
    cout << ans << endl;

}
}