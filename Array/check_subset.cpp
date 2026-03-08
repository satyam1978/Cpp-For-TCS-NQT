#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <climits>

using namespace std;

// Function prototypes

int main() {
system("cls");
    // Your main code here
    vector<int> arr1 = {1, 3, 4, 5, 2};
    vector<int> arr2 = {2, 4, 3, 1, 7, 5, 15};

    int n= arr1.size(),m=arr2.size();

    if(n>m) return false;
bool present = false;
    for(int i=0;i<n;i++){
      

      for(int j=0;j<m;j++){
        if(arr2[j]==arr1[i]){
          present = true;
          break;
        }
      }
    }

    if(present){
      cout<< " arr1[] is a subset of arr2[]";
    }else{
      cout<< " arr1[] is not a subset of arr2[]";
    }
    
    return 0;
}

// Function definitions