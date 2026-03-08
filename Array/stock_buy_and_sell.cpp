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
    vector<int> arr = {7,2,8,4,6};
    int max_profit=0;
    int min_price=INT_MAX;
    for(int i:arr){
      min_price = min(min_price, i);
      max_profit = max(max_profit, i - min_price);
    }
    cout << "Maximum profit: " << max_profit << endl;
    
    return 0;
}

// Function definitions