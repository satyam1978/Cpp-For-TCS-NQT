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
    int n=5, r=3;
    int result = 1;
    for(int i=0; i<r; i++){
        result *= (n-i);
    }
    cout << "Number of ways to permute " << n << " people in " << r << " seats is: " << result << endl;
    
    return 0;
}

// Function definitions