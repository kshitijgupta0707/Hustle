
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
        cout << arr[i] + 2 << " ";
    } cout << endl;
    cout << "end";
    return 0;
}

// {
//     "version": "2.0.0",
//     "tasks": [
//         {
//             "label": "Compile and Run with Input/Output",
//             "type": "shell",
//             "command": "powershell.exe",
//             "args": [
//                 "-c",
//                 "g++ -std=c++17 -o ${fileBasenameNoExtension} ${file}; Get-Content input.txt | .\\${fileBasenameNoExtension} | Tee-Object -FilePath output.txt; Get-Content output.txt"
//             ],
//             "group": {
//                 "kind": "build",
//                 "isDefault": true
//             },
//             "presentation": {
//                 "reveal": "silent",
//                 "revealProblems": "onProblem",
//                 "focus": false,
//                 "panel": "shared"
//             }
//         }
//     ]
// }
