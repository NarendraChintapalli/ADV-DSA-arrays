#include<bits/stdc++.h>
using namespace std;

//naive method 
int water_bar(int arr[],int n){
  int water=0;
  if(n<=2){
    return water;
  }
  for(int i=1;i<n-1;i++){
    int lmax=arr[i];
    for(int j=0;j<i;j++){
      lmax=max(lmax,arr[j]);
    }

    int rmax=arr[i];
    for(int j=i+1;j<n;j++){
      rmax=max(rmax,arr[j]);
    }

    water += min(lmax,rmax) - arr[i];
  }
  return water;
}

//efficient by pre computing lmax and rmax
int trap_water(int arr[],int n){

  int water=0;
  if(n<=2){
    return water;
  }

  int lmax[n],rmax[n];
  lmax[0]=arr[0];
  for(int i=1;i<n;i++){
    lmax[i]=max(arr[i],lmax[i-1]);
  }
  
  rmax[n-1]=arr[n-1];
  for(int i=n-2;i>=0;i--){
    rmax[i]=max(arr[i],rmax[i+1]);
  }

  for(int i=1;i<n-1;i++){
    water += min(lmax[i],rmax[i]) - arr[i];
  }
  return water;
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

  // Calculate water trapped using both methods
  cout << "Water trapped (naive method) = " << water_bar(arr, n) << endl;
  cout << "Water trapped (efficient method) = " << trap_water(arr, n) << endl;
  
  return 0;
}