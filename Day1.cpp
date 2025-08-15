
#include<iostream>
using namespace std;

void sorting(int arr[] , int n){

int low = 0, mid = 0, high = n-1;

while(mid <= high){

if(arr[mid] ==0){
  swap(arr[low] ,arr[mid]);
  low++;
  mid++;
}
else if (arr[mid]  == 1){
mid++;
}
else{
swap(arr[mid],arr[high]);
high--;
}
}
}

void show(int arr[], int n){
  for(int i=0,i < n; i++){
     cout<<arr[i]<<" ";
    cout<<endl;
  }
}

int main(){
  int arr[] ={0,1,2,1,0,2,1,0};

int n= size(arr)/sizeof(arr[0]);
sorting(arr,n);
show(arr,n);

return 0;

}
