#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <climits>

using namespace std;

// Function prototypes

int main() {
system("cls");
    // Your main code here
    int arr[][2] = {{1, 2}, {3, 4}, {5, 6}, {2, 1}, {6, 5}};
    int n = sizeof(arr) / sizeof(arr[0]);

    for(int i=0; i<n; i++){
      for(int j=i+1; j<n; j++){
        if(arr[j][0] == arr[i][1] && arr[j][1] == arr[i][0]){
          cout << "Symmetric Pairs: ("<<arr[i][0] << ", " << arr[i][1] << ")"<< endl;
        }
      }
    }
    
    return 0;
}

// Function definitions