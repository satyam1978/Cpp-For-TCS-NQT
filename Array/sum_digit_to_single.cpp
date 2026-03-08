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
    int r=3;
    int n =1234;
    int sum=0;
    while(n>0){
      sum += n%10;
      n /= 10;
    }
    sum *= r;
    int digit =0;
    while(sum>0){
      digit += sum%10;
      sum /= 10;
    }
      cout<<digit;
    
    return 0;
}

// Function definitions