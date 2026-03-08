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
    int num = 15;
    vector<int> temp;
    for (int i = 2; i <= sqrt(num); i++) {
        while (num % i == 0) {
            temp.push_back(i);
            num /= i;
        }
    }
    if (num > 1) {
        temp.push_back(num);
    }
    cout << "Prime factors: ";
    for (int factor : temp) {
        cout << factor << " ";
    }


    
    return 0;
}

// Function definitions