#include <iostream>

using namespace std;

// Function prototypes

int main() {
system("cls");
    // Your main code here
    cout << "Enter any two number to get there swap!" << endl;
    int a,b;
    cin>>a>>b;
    cout<< "Number before swap: "<<a<<" and "<<b<<endl;
    a +=b;
    b = a-b;
    a -=b;
    cout<<"Number after swap: "<<a<<" and "<<b;
    return 0;
}

// Function definitions