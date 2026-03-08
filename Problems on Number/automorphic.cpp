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
    int num=5;
    int sq=num*num;
    int unit_digit=sq%10;
    if(unit_digit==num)
    {
        cout<<num<<" is an automorphic number."<<endl;
    }
    else
    {
        cout<<num<<" is not an automorphic number."<<endl;
    }
    
    return 0;
}

// Function definitions