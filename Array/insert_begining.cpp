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
    int x=26;
    arr.insert(arr.begin(), x);
    
    for(int num: arr){
        cout << num << " ";
    }
    return 0;
}

// Function definitions