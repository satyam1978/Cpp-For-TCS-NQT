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
    vector<int> arr ={5,2,7,9,0,1,4,3,6};
    int end = arr.size() - 1,mid=end/2;
    sort(arr.begin(),arr.end());
    while(mid<end){
      swap(arr[mid],arr[end]);
      mid++;
      end--;
    }
    cout<<"Array after incrementing and decrementing: ";
    for(int i:arr){
      cout<<i<<" ";
    }
    return 0;
}

// Function definitions