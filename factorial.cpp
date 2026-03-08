#include <iostream>
#include<cmath>

using namespace std;

// Function prototypes

int main() {
system("cls");
    // Your main code here
    cout << "Enter a number to get factorial!" << endl;
   long long n, fact=1,i;
    cin>>n;
    if(n==1 || n==0){
        cout<<"Factorial is 1!";
    }
    for(i=1;i<n;i++)
        fact +=fact*i;
    cout<<"Factorial of "<<n <<" is "<<fact;
    
    return 0;
}

// Function definitions