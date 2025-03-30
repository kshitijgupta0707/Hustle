
// ctrl + shift + b will run the task that is defined
//  in the tasks.json file
//  for taking the input and output from the file

// ctrl + 1 to run code
#include <iostream>
using namespace std;
#include <algorithm>
int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] + 10 << " ";
    }
    cout << endl;
    cout << "end";
    return 0;
}
