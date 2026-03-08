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
    vector<int> arr = {7,1,12,8,9,15,17,21};
    int max = INT_MIN;
    int count =0;
    for(int i: arr){
      if(i>max){
        max = i;
        count++;
      }
    }
    cout<<"Count of max element: "<<count<<endl;
    
    return 0;
}

// Function definitions