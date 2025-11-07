#include<bits/stdc++.h>
using namespace std;

//two pointer and sliding window
int max_cons_1s(int arr[],int n){
  int l=0,r=0;
  int maxlen=0;
  //int zeroes=0;
  int diff_num=0;
  while(r<n){
    if(arr[r]!=1){
     // zeroes++;
     diff_num++;
    }
    if(diff_num==0){
      maxlen=max(maxlen,r-l+1);
    }
    else{
      if(arr[l]!=1){
       // zeroes--;
       diff_num--;
      }
      l++;
    }
    r++;
  }
  return maxlen;
}

// normal approach easy
int max1s(int arr[],int n){
  int res=0,curr=0;
  for(int i=0;i<n;i++){
    if(arr[i]==0){
      curr=0;
    }
    else{
      curr++;
      res=max(res,curr);
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

  cout<<"max consecutive 1 s(sliding window) = "<<max_cons_1s(arr, n)<<endl;
  cout<<"max consecutive 1 s(esay) = "<<max1s(arr, n);
  return 0;
}