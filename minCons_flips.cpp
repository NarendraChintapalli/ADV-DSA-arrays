#include<bits/stdc++.h>
using namespace std;

void min_flips(bool arr[],int n){
  for(int i=1;i<n;i++){
    if(arr[i]!=arr[i-1]){
      if(arr[i]!=arr[0]){
        cout<<"from index "<<i<<" to index ";
      }
      else{
        cout<<i-1<<endl;
      }
    }
  }
  if(arr[n-1]!=arr[0]){
    cout<<n-1<<endl;
  }
}

int main(){
  int n;
  cout<<"enter the size = ";
  cin>>n;
  if(n<=0){
    cout<<"invalid size\n";
    return 0;
  }
  bool arr[n];
  for(int i=0;i<n;i++){
    cout<<"enter the "<<i+1<<" number =";
    cin>>arr[i];
  }
  min_flips(arr,n);
  return 0;
}