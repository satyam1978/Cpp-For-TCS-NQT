#include <iostream>

using namespace std;

// Function prototypes

int main() {
system("cls");
    // Your main code here
    cout << "Enter a number to check this is an even or an odd!" << endl;
    int n;
    cin>>n;
    if(n<0){
      cout<<"Please! enter a valid number";
    }
    else if(n%2==0){
      cout<<"This is an even!";
    }else{
      cout<<"This is an odd!";
    }
    
    return 0;
}

// Function definitions