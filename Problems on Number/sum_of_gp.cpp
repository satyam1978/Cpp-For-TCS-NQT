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
    int n=5, a=1, r=2;
    int sum=0;
    int term =a;
    for(int i=1; i<=n; i++){
        sum += term;
        term *= r;
    }
    cout<<"Sum of GP is: "<<sum<<endl;
    
    return 0;
}

// Function definitions