#include<bits/stdc++.h>
using namespace std;

int equilibrium_point(int arr[],int n){
  int rs=0;
  for(int i=0;i<n;i++){
    rs = rs+arr[i];
  }
  int ls=0;
  for(int i=0;i<n;i++){
    rs = rs -arr[i];
    if(ls==rs){
      return i;
    }
    ls=ls+arr[i];
  }
  return -1;
}

int main(){
  int n;
  cout<<"enter the size = ";
  cin>>n;
  if(n<=0){
    cout<<"invalid size\n";
    return 0;
  }
  int arr[n];
  for(int i=0;i<n;i++){
    cout<<"enter the "<<i+1<<" number =";
    cin>>arr[i];
  }
  auto idx = equilibrium_point(arr, n);
  if(idx==-1){
    cout<<"no ep";
  }
  else{
    cout<<"the ep index = "<<idx;
  }
  return 0;
}