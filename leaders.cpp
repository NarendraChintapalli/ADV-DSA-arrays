#include<bits/stdc++.h>
using namespace std;


void leaders(int arr[],int n){
  int curr_ldr=arr[n-1];
  cout<<curr_ldr<<endl;
  for(int i=n-2;i>=0;i--){
    if(arr[i]>curr_ldr){
      curr_ldr=arr[i];
      cout<<curr_ldr<<endl;
    }
  }
}

int main(){
  int n;
  cout<<"enter size of array = ";
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cout<<"enter the "<<i+1<<" number =";
    cin>>arr[i];
  }
  leaders(arr,n);
}