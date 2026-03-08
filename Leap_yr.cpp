#include <iostream>

using namespace std;

// Function prototypes

int main() {
system("cls");
    // Your main code here
    cout << "Enter the year to check it leap year or not!" << endl;
    int n;
    cin>> n;
    if((n%400==0)||(n%100!=0 && n%4==0)){
      cout<<"This is leap year!"<<endl;
    }else{
      cout<<"Not a leap year!";
    }
    
    return 0;
}

// Function definitions