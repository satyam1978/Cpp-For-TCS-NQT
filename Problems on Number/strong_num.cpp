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
    int num =141;
    int sum = 0;
    int temp = num;
    int fact=1;
    while(temp>0){
        int digit = temp%10;
        fact=1;
        for(int i=1;i<=digit;i++){
            fact*=i;
        }
        sum+=fact;
        temp/=10;
    }
    if(sum==num){
        cout<<num<<" is a strong number."<<endl;
    }else{
        cout<<num<<" is not a strong number."<<endl;
    }

    
    return 0;
}

// Function definitions