#include<bits/stdc++.h>
using namespace std;


int find_majority(int arr[],int n){
  //finding the candidate
  int major_idx=0,count=1;
  for(int i=1;i<n;i++){
    if(arr[major_idx]==arr[i]){
      count++;
    }
    else{
      count--;
    }
    if(count==0){
      major_idx=i;
      count=1;
    }
  }
  //checkingn the candidate is mojority or not

  count=0;
  for(int i=0;i<n;i++){
    if(arr[major_idx]==arr[i]){
      count++;
    }
  }
  if(count<= (n/2)){
    return -1;
  }
  return major_idx;
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
  int index_of_major = find_majority(arr,n);
  if(index_of_major==-1){
    cout<<"no majority candidate "<<endl;
  }
  else{
    cout<<"major candidate index = "<<index_of_major<<" and major candidate = "<<arr[index_of_major]<<endl;
  }
  

  return 0;
}