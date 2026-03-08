#include <iostream>

using namespace std;

// Function prototypes

int main() {
system("cls");
    // Your main code here
    cout << "Enter a number to get there revrse!" << endl;
    int n, rev=0, rem,orn;
    cin>>n;
    orn=n;
    while(n>0){
      rem=n%10;
      rev=rev*10+rem;
      n /=10;
    }
    if(orn==rev){
      cout<<"It is a palindrome!"<<endl;
    }else{
      cout<<"Not a palindrome!"<<endl;
    }
    
    
    return 0;
}

// Function definitions