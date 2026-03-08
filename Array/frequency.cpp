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
    vector<int> arr ={2,1,1,3,3,3,2,4,5,5,6,6,6,6};
    int freq[100] ={0};
    for(int i:arr){
      freq[i]++;
    }

    for(int i=0;i<arr.size();i++){
      if(freq[i]>0)
     cout<<"Frequency of "<< i<<" is "<<freq[i]<<endl;
    }
    
    return 0;
}

// Function definitions