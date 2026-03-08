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
    vector<int> arr = {1, 2, 3, 2, 1,3,3,5,5,5,5,5};
    int freq[100] = {0}; // Assuming elements are in the range 0-99
    for(int i: arr) {
        freq[i]++;
    }

    for(int i: arr)
      if(freq[i] % 2 != 0) {
          cout << i << " ";
      }
    
    
    return 0;
}

// Function definitions