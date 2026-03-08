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
    int n=5, a=1, d=2;
    int sum=0;
    for(int i=1; i<=n; i++){
        sum += a;
        a +=d;
    }
    cout<<"Sum of AP is: "<<sum<<endl;
    
    return 0;
}

// Function definitions