
// ctrl + shift + b will run the task that is defined
//  in the tasks.json file
//  for taking the input and output from the file

// ctrl + 1 to run code
#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
int main()
{

   int t;
   cin >> t;
   while(t--){
     int x;
     int k;
     cin >> x >> k;
     int number = k;
     if(k == 1|| x == 1){
        if (x == 1) {
             number = 0;
            for(int i = k-1 ; i >= 0 ; i-- ){
                   number += pow(10,i);
            }
        
        }

    
        bool prime = true;
        for (int i = 2; i <= sqrt(number); i++) {
            if (number % i == 0) {
                prime = false;
                break;
            }
        }
    
        if (prime) {
            cout << "YES" << endl; // x is prime
        } else {
            cout << "NO" << endl;  // x is not prime
        }
    
     }
     else {
        cout << "NO" << endl;
     }
         
   }
}
