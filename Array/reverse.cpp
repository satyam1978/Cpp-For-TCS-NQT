#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function prototypes

int main() {
system("cls");
    // Your main code here
    vector<int> arr = {1, 2, 3, 48, 5};
    int start =0, end =arr.size()-1;
    while(start<end){
      swap(arr[start],arr[end]);
      start++;
      end--;
    }
    for(int i:arr){
        cout<<i<<" ";
    }

    
    return 0;
}

// Function definitions