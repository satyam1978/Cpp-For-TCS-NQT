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

    sort(arr.begin(),arr.end(),[&freq](int a,int b){
        if(freq[a]==freq[b]){
            return a<b;
        }
        return freq[a]>freq[b];
    });

    for(int i:arr){
        cout<<i<<" ";
    }
    
    return 0;
}

// Function definitions