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
    vector<int> arr = {1, 2, 3, 4, 5,100, 89};
    int sum=0;
    for(int i:arr){
      sum +=i;
    }
    cout<<"Sum of all element of an array is: "<<sum<<endl;
    
    return 0;
}

// Function definitions