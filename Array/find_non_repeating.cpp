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
      vector<int> arr = {1, 2, 3, 2, 1,2,2,3,7,8,9};
      int freq[100]= {0};
      for(int i: arr){
        freq[i]++;
      }

      for(int i: arr){
        if(freq[i] == 1){
            cout<<i<<" Non repeating element "<<endl;
        }
      }
    return 0;
}

// Function definitions