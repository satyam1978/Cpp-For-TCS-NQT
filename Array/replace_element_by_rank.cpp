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
    // Your main code here
    vector<int> arr = {7,2,8,1,9};
    vector<int> temp =arr;
    
    sort(temp.begin(), temp.end());

    unordered_map<int,int> rankMap;
    int cu_rnk=1;
    for(int num: temp){
      if(rankMap.find(num)==rankMap.end()){
        rankMap[num]=cu_rnk;
        cu_rnk++;
      }
    }

    for(int i=0;i<arr.size();i++){
      arr[i]=rankMap[arr[i]];
    }
    for(int num: arr){
      cout<<num<<" ";
    }
    return 0;
}

// Function definitions