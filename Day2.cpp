#include<iostream>
using namespace std;

int findMissing(int arr,int n){
  int sum =0;
  for(int i=0;i<n ;i++){
    sum +=arr[0];
    

  }
int expectedSum= (n+2)*(n+1)/2;
return expectedSum-sum;
}
int main(){


  int arr[]={ 1,2,4,5 };
  int n =sizeof(arr)/sizeof(arr[0]);

  cout<<findMissing(arr,n);
  
  return 0;
}
