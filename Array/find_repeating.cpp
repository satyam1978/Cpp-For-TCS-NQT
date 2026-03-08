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
    int freq[100] = {0};

    for(int i: arr){
      freq[i]++;
    }

    for(int i=0; i<arr.size(); i++){
      if(freq[arr[i]] > 1){
        cout << arr[i] << " is a repeating " << freq[arr[i]] <<" times"<< endl;
        freq[arr[i]] = 0; // To avoid printing the same element multiple times
      }
    }
    
    return 0;
}

// Function definitions