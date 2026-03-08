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
    cout << "Median an array!" << endl;
    vector<int> arr = {5, 3, 8, 1, 4, 7, 6, 2};
    sort(arr.begin(), arr.end());
    int n = arr.size();
    double median;
    if(n%2==0){
      median = (arr[n/2-1] + arr[n/2])/2.0;
      cout << "Median: " << arr[median] << endl;
    }else{
      median = arr[n/2];
      cout << "Median: " << arr[median] << endl;
    }

    return 0;
}

// Function definitions