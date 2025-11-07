#include<bits/stdc++.h>
using namespace std;

int stock(int arr[],int n){
  if(n<=1){
    return -1;
  }
  int profit=0;
  for(int i=1;i<n;i++){
    if(arr[i]>arr[i-1]){
      profit = profit + arr[i]-arr[i-1];

    }
  }
  return profit;
}
int main(){
  int n;
  cout<<"enter the size = ";
  cin>>n;
  if(n<=0){
    cout<<"invalid size\n";
    return 0;
  }
  int * arr = new int[n];
  for(int i=0;i<n;i++){
    cout<<"enter the "<<i+1<<" number =";
    cin>>arr[i];
  }
 int profit = stock(arr,n);
 if(profit==-1){
  cout<<"the days are not sufficient "<<endl;
 }
 else{
  cout<<"the profit is = "<<profit<<endl;
 }
 delete [] arr;
 return 0;
}