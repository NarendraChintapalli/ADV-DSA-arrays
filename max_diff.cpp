#include<bits/stdc++.h>
using namespace std;


int maxDiff(int arr[],int n){
  if(n<=1){
    return -1;
  }
  int max_dif=arr[1]-arr[0];
  int min_val=arr[0];
  for(int i=0;i<n;i++){
    max_dif=max(max_dif,arr[i]-min_val);
    min_val=min(min_val,arr[i]);
  }
  return max_dif;
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
  
  int md=maxDiff(arr,n);
  if(md==-1){
    cout<<"there is no sufficient numbers to find diff"<<endl;
    
  }
  else{
    cout<<"max dif = "<<md<<endl;
  }
  

  return 0;
}