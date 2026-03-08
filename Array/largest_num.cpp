#include <iostream>
#include<vector>

using namespace std;

// Function prototypes

int main() {
system("cls");
    // Your main code here
    vector<int> arr={4,56,88,9,22};
    int max_val=0;
    for(int i=0;i<arr.size();i++){
      if(arr[i]>max_val){
        max_val=arr[i];
      }
    }
    cout<<"Max ekement is: "<<max_val;
    
    return 0;
}

// Function definitions