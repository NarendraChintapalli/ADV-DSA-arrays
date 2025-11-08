#include<bits/stdc++.h>
using namespace std;

int Normal_max_sum_subArray(int arr[],int n){
  int sum=arr[0],max_sum=arr[0];
  for(int i=1;i<n;i++){
    sum = max(sum+arr[i],arr[i]);
    max_sum=max(sum,max_sum);
  }
  
  return max_sum;
}

int overall_max_sum_sub_array_of_circular_and_Normal(int arr[],int n){
  int max_normal=Normal_max_sum_subArray(arr,n);
  cout<<"max_normal = "<<max_normal<<endl;
  if(max_normal<0){
    return max_normal;
  }

  int arr_sum=0;
  for(int i=0;i<n;i++){
    arr_sum += arr[i];
    arr[i]  = -arr[i];
  }
  
  int min_sum_sub_array= - Normal_max_sum_subArray(arr,n);
  cout<<"min sum sub array = "<<min_sum_sub_array<<endl;

  int max_circular=arr_sum + Normal_max_sum_subArray(arr,n);
  
  cout<<"max_circular="<<max_circular<<endl;

  return max(max_normal,max_circular);
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
  cout<<"max sum = "<<overall_max_sum_sub_array_of_circular_and_Normal(arr,n);

  return 0;
}