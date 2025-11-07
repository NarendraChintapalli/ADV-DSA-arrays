#include<bits/stdc++.h>
using namespace std;

//naive method
int longes_even_odd_subArray(int arr[],int n){
  if(n==1){
    return 1;
  }
  
  int res=0;
  for(int i=0;i<n;i++){
    int a,b;
    int count=0;
    for(int j=i;j<n-1;j++){
      a=arr[j]%2;
      b=arr[j+1]%2;

      if(a==b){
        count=1;
      }

      else{
        count++;
      }
      res=max(res,count);
    }
  }
  return res;
}

//efficient 
int longSub(int arr[],int n){
  int curr=1,res=1;
  int a,b;
  for(int i=1;i<n;i++){
    a=arr[i-1]%2;
    b=arr[i]%2;
    if((a==0 && b!=0) || (a!=0 && b==0)){
      curr++;
      res=max(res,curr);
    }
    else{
      curr=1;
    }
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
  cout<<"longest even odd sub array(naive) ="<<longes_even_odd_subArray(arr,n)<<endl;
  cout<<"longest even odd sub array(efficient) ="<<longSub(arr,n);

  return 0;
}