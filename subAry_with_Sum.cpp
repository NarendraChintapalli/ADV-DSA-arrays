#include<bits/stdc++.h>
using namespace std;

//method 1 using prefix sum and hash map
bool subArray_with_sum(int arr[],int n,int sum){
  int p_sum=0;
  int i=0;
  map<int,int> m;
  while(i<n){
    p_sum += arr[i];
    if(p_sum==sum){
      return true;
    }
    if(m.find(p_sum-sum)!=m.end()){
      return true;
    }
    m[p_sum]++;
    i++;
  }
  return false;
}

//method 2 using 2pointer and sliding window
bool Is_sub_array_with_sum(int arr[],int n,int k){
  int i=0,j=0,sum=0;
  while(j<n){
    sum += arr[j];
    while(sum>k && i<=j){
      sum=sum-arr[i];
      i++;
    }
    if(sum==k){
      return true;
    }
    j++;
    
  }
  return false;
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
  int sum;
  cout<<"enter the sum val = ";
  cin>>sum;
  bool res1 = subArray_with_sum(arr,n,sum);
  if(res1){
    cout<<"there is a sub array of sum ="<<sum<<endl;

  }
  else{
    cout<<"there is a NO sub array of sum ="<<sum<<endl;
  }

  bool res2 = Is_sub_array_with_sum(arr,n,sum);
  if(res2){
    cout<<"there is a sub array of sum ="<<sum<<endl;
  }
  else{
    cout<<"there is a NO sub array of sum ="<<sum<<endl;
  }


  return 0;
}