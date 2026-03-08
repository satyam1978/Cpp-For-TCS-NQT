#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <climits>
#include <string>

using namespace std;

// Function prototypes

int main() {
system("cls");
    // Your main code here
    int n=3008001;
    string str=to_string(n);
    for(int i=0;i<str.size();i++){
        if(str[i]=='0'){
            str[i]='1';
        }
    }
    cout<<stoi(str)<<endl;
    return 0;
}

// Function definitions