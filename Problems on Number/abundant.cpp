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
    int n = 18;
    int sum=0;
    int temp=n;
   for(int i=1; i<=temp-1; i++){
       if(temp%i==0){
           sum+=i;
       }
      }
    if(n<sum){
        cout << n << " is a Abundant number." << endl;
    } else {
        cout << n << " is not a Abundant number." << endl;
    }
    
    return 0;
}

// Function definitions