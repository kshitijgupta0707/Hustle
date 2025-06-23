
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
    string n;
    cin >> n;

    //cl 
    int cl = 0;
    int i = 0;
    for(i = n.length()-1 ; i >= 0 ; i--){
        if(n[i] != '0'){
            break;
        }
        else{
            cl++;
        }
    }
    int nz = 0;
    for(int j = i ; j >=0 ; j--){
        if(n[j]!= '0'){
            nz++;
        }
    }
    cout << cl + nz - 1 << endl;
         
   }
}
