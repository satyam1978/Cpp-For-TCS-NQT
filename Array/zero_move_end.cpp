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
    vector<int> arr = {0, 1, 0, 3, 12};
    int n = arr.size();
    int j = 0; // Index of the next non-zero element
    for(int i = 0; i < n; i++) {
        if(arr[i] != 0) {
            arr[j++] = arr[i]; // Move non-zero element to the front
        }
    }
    // Fill remaining elements with zero
    while(j < n) {
        arr[j++] = 0;
    }
    // Print the modified array
    cout << "Modified array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}

// Function definitions
