#include<bits/stdc++.h>
using namespace std;

int max_sum_of_k_consecutive(int arr[],int n,int k){
  int sum=0;
  for(int i=0;i<k;i++){
    sum += arr[i];
  }
  int j=k,max_sum=sum;
  while(j<n){
    sum = sum+arr[j]-arr[j-k];
    max_sum=max(max_sum,sum);
    j++;
  }

  return max_sum;
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
  int k;
  cout<<"enter the k val = ";
  cin>>k;
  cout<<"max sum = "<<max_sum_of_k_consecutive(arr,n,k);

  return 0;
}