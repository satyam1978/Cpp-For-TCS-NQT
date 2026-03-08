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
      vector<int> arr = {1, 2, 3, 2, -12};
    int n = arr.size();
    int max_product = INT_MIN;
    for(int i=0;i<n;i++){
      int product = 1;
      for(int j=i;j<n;j++){
        product *= arr[j];
        max_product = max(max_product, product);
      }
    }
    cout << "Maximum product subarray is: " << max_product << endl;
    
    return 0;
}

// Function definitions