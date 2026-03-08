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
    int num=21; // Example number
    int sum = 0;
    for(int i=1;i<=num-1;i++){
        if(num%i==0){
            sum+=i;
        }
    }

    if(sum==num){
        cout<<num<<" is a perfect number."<<endl;
    }    else{
        cout<<num<<" is not a perfect number."<<endl;
    }
    return 0;
}

// Function definitions