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
    int pos = 6, x=56;

    arr.insert(arr.begin() + pos, x);

    for(int i : arr) {
        cout << i << " ";
    }
    
    return 0;
}

// Function definitions