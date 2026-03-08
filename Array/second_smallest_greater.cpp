#include <iostream>
#include<vector>
#include<climits>

using namespace std;

// Function prototypes

int main() {
system("cls");
    // Your main code here
    vector<int> arr={-4,56,88,-9,22,789};
    int max_val=0,min_val=arr[0];
    int snd_min=INT_MAX,snd_max=INT_MIN;
    for(int i=0;i<arr.size();i++){
      if(arr[i]>max_val)
        max_val=arr[i];
      
      if(arr[i]<min_val)
        min_val=arr[i];
      }
    
    for(int i=0;i<arr.size();i++){
    if(arr[i]>snd_max && arr[i]<max_val)
        snd_max=arr[i];
      
      if(arr[i]<snd_min && arr[i]>min_val)
        snd_min=arr[i];
      
    }
    cout<<"Max ekement is: "<<max_val<<endl;
     cout<<"2nd Max ekement is: "<<snd_max<<endl;
      cout<<"Min ekement is: "<<min_val<<endl;
       cout<<"2nd Min ekement is: "<<snd_min;
    
    return 0;
}

// Function definitions