#include <iostream>
#include<cmath>
#include<vector>

using namespace std;

// Function prototypes

int main() {
system("cls");
    // Your main code here
    int sum=0, count=0;
    vector<int> arr={1,2,3,5,6};
    for(int i=0;i<arr.size();i++){
      sum+=arr[i];
      count++;
    }
    cout<<"Sum is: "<<sum<<endl;
    cout<<"Count is: "<<count<<endl;
    cout<<"Average is: "<<sum/count;
    
    return 0;
}

// Function definitions