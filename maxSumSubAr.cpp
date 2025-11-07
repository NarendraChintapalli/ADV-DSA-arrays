#include<bits/stdc++.h>
using namespace std;

int max_sum_SubArray(int arr[],int n){
  int res=arr[0];
  int maxEndSum=arr[0];
  for(int i=1;i<n;i++){
    maxEndSum = max(maxEndSum+arr[i],arr[i]);
    res=max(res,maxEndSum);
  }
  return res;
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
  cout<<"max sum aub array ="<<max_sum_SubArray(arr,n);

  return 0;
}