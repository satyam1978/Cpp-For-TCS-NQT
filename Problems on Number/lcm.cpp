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
    int a=5, b=15;
    int gcd=1;
    for(int i=1; i<=min(a,b); i++){
        if(a%i==0 && b%i==0){
            gcd=i;
        }
    }
    int lcm = (a * b) / gcd;
    cout << "LCM of " << a << " and " << b << " is: " << lcm << endl;
    
    return 0;
}

// Function definitions