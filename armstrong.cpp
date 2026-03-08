#include <iostream>

using namespace std;

// Function prototypes

int main() {
system("cls");
    // Your main code here
    cout << "Enter a number!" << endl;
    int n, sum=0,rem,orn;
    cin>>n;
    orn=n;
    while(n!=0){
      rem=n%10;
      sum = sum+rem*rem*rem;
      n /=10;
    }
    if(sum == orn){
      cout<<"Number is an armstrong!"<<endl;
    }else{
      cout<<"Number is not an armstrong!"<<endl;
    }
    
    return 0;
}

// Function definitions