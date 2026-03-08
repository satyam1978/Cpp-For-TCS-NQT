#include <iostream>

using namespace std;

// Function prototypes

int main() {
system("cls");
    // Your main code here
    cout << "Enter a number to get there revrse!" << endl;
    int n, rev=0, rem;
    cin>>n;
    cout<<"Number before reverse: "<<n<<endl;
    while(n>0){
      rem=n%10;
      rev=rev*10+rem;
      n /=10;
    }
    cout<<"Number after reverse: "<<rev<<endl;
    
    
    return 0;
}

// Function definitions