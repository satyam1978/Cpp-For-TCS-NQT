#include <iostream>

using namespace std;

// Function prototypes

int main() {
system("cls");
    // Your main code here
    cout << "Enter a number to check it is prime or not!" << endl;
    int n,i;
    cin>> n;
    if(n==1 || n==0) {
      cout<<"Not a prime!"<<endl;
    }
    bool isprime=true;
    for(int i=2;i<n;i++){
      if(n%i==0){
        isprime=false;
        break;
      }
    }
    if(!isprime){
      cout<<"Not a prime!";
    }else{
      cout<<"Is a prime!";
    }
    
    return 0;
}

// Function definitions