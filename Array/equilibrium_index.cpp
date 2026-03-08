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
    vector<int> arr = {1,-5,4,6,8,6};
    int total_sum = 0;
    for(int i=0; i<arr.size(); i++){
        total_sum += arr[i];
    }
    int leftsum=0, rightsum=total_sum;
    for(int i=0; i<arr.size(); i++){
        rightsum -= arr[i];
        if(leftsum == rightsum){
            cout << "Equilibrium index is: " << i << endl;
            return 0;
        }
        leftsum += arr[i];
    }
    return 0;
}

// Function definitions