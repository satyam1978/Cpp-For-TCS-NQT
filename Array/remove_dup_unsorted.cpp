#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <climits>
#include<unordered_map>

using namespace std;

// Function prototypes

int main() {
system("cls");
    vector<int> arr = {6, 2, 2, 3, 4, 4, 5,2,1,6,1,2,4};
    unordered_map<int, bool> seen;
    vector<int> uniqueArr;
    for(int num : arr){
        if(!seen[num]){
            uniqueArr.push_back(num);
            seen[num] = true;
        }
    }
    for(int num : uniqueArr){
        cout << num << " ";
    }
    
    return 0;
}

// Function definitions