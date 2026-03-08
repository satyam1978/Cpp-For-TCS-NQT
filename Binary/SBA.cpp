#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Function prototypes

int main() {
system("cls");

  int n;
  cin>>n;
  vector<int> arr(n);
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
  sort(arr.begin(),arr.end());
  for(int i:arr){
    cout<<i<<" ";
  }
  cout<<endl;
  
  int start=0, end=arr.size()-1;
  while(start<end){
    if(arr[start] == 1 && arr[end]==0){
    cout<< start << " " <<end<<endl;
    }else if(arr[start] != 1 && arr[end]==0){
      cout<<n<<" "<<end<<endl;
    }else if(arr[start] == 1 || arr[end]!=0){
      cout<<start<<" "<<"-1"<<endl;
    }else if(arr[start] != 1 || arr[end]!=0){
      cout<<n<<" "<<"-1"<<endl;
    }
    start++;
    end--;
  }

  return 0;

}