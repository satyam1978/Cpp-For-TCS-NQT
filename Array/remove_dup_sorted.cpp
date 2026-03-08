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
    vector<int> arr = {1, 2, 2, 3, 4, 4, 5};
    
    int i =0;
    for(int j=1;j<arr.size();j++){
      if(arr[j] != arr[i]){
        i++;
        arr[i] = arr[j];
      }
    }

    int newSize = i+1;
    for(int num =0; num<newSize; num++){
        cout << arr[num] << " ";
    }
    
    return 0;
}

// Function definitions