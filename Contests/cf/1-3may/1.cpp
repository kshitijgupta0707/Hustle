
// ctrl + shift + b will run the task that is defined
//  in the tasks.json file
//  for taking the input and output from the file

// ctrl + 1 to run code
#include <iostream>
using namespace std;
#include <algorithm>
int main()
{

   int t;
   cin >> t;
   while(t--){
     long long n , k ,x;
     cin >> n >> k >> x;
     long long a[n];
     for(int i = 0; i < n; i++){
        cin >> a[i];
     }
     long long sum = 0;
     long long cnt = 0;
     for(int i = n-1; i >= 0; i--){

        sum += a[i];
        if(sum >= x){
            break;
        }
        cnt++;
    }

    if(sum * k < x){
        cout << "0" << endl;
        continue;
    }
   

    long long add = sum;
    if(sum < k){
        for(int i = 1 ; i < k ; i++){
              sum += add;
              if(sum >= x){
                  sum -= add;
                  break;
                }
                cnt += n;
        }
        for(int i = n-1 ; i >= 0 ;i--){
            sum += a[i];
            if(sum >= x){
                break;  
            }
            cnt++;
        }
    }
        

     
    //  cout << "sum: " << sum << endl;
      cout << n * k - cnt << endl;



   }
}
