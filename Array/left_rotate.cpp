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
    cout << "Left Rotate as per key!" << endl;
    vector<int> arr = {1, 2, 3, 4, 5};
    int k=2;
    vector<int> arr2;
    for(int i=k;i<arr.size();i++){
      arr2.push_back(arr[i]);
    }
    for(int i=0;i<k;i++){
      arr2.push_back(arr[i]);
    }

    for(int i: arr2){
      cout << i << " ";
    }
    return 0;
}

// Function definitions