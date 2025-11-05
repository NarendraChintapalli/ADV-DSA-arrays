#include<bits/stdc++.h>
using namespace std;

//method 1
int rotate(int arr[],int n,int d){
 // int temp=0;
  d=d%n;
  for (int i=0;i<d/2;i++ ){
    // temp=arr[i];
    // arr[i]=arr[d-1-i];
    // arr[d-1-i]=temp;
    swap(arr[i],arr[d-1-i]);
  }
  for (int i=d;i<n/2;i++){
    // temp=arr[i];
    // arr[i]=arr[n-1-i];
    // arr[n-1-i]=temp;
    swap(arr[i],arr[n-1-i]);
  }
  for (int i=0;i<n/2;i++){
    // temp=arr[i];
    // arr[i]=arr[n-1-i];
    // arr[n-1-i]=temp;   
    swap(arr[i],arr[n-1-i]);
  }
}

//2nd method 
// Function declaration first
void reverse(int arr[],int l,int r){
  while(l<r){
    swap(arr[l],arr[r]);
    l++;
    r--;
  }
}

void leftrotate_d(int arr[],int n,int d){
  reverse(arr,0,d-1);
  reverse(arr,d,n-1);
  reverse(arr,0,n-1);
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
  int d;
  cout<<"enter left rotate ";
  cin>>d;
  rotate(arr,n,d);
  for(int i=0;i<n;i++){
    cout<<"the "<<i+1<<" number ="<<arr[i]<<endl;
  }

  leftrotate_d(arr,n,d);
  for(int i=0;i<n;i++){
    cout<<"the "<<i+1<<" number ="<<arr[i]<<endl;
  } 
}