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
    int n = 140;
    int sum=0;
    int temp=n;
    while(temp>0){
        sum+=temp%10;
        temp/=10;
    }
    if(n%sum==0){
        cout << n << " is a Harshad number." << endl;
    } else {
        cout << n << " is not a Harshad number." << endl;
    }
    
    return 0;
}

// Function definitions