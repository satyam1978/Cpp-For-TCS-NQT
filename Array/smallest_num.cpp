#include <iostream>
#include<cmath>
#include<algorithm>
#include<vector>
#include<climits>

using namespace std;

// Function prototypes

int main() {
system("cls");
    // Your main code here
    vector<int> arr={0,2,-4,55,-2};
    int min_val=-1;
    for(int i=0;i<arr.size();i++){
      if(arr[i]<min_val){
        min_val=arr[i];
      }
       
    }
   cout<<"Smallest number is "<<min_val;
    
    return 0;
}

// Function definitions