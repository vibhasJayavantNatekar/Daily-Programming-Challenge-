#include<iostream>
using namespace std;

void findZeroSumarrays(int arr , int n){

  for(int start=0; start< n;++start){

    int sum = 0;

    for(int end= start;end <n;++end){

      sum+=arr[end];
      if(sum==0){
        cout<<"Zero sum Subarray: ("<<start<<" , "<<end<<")"<<endl;

      }
    }
  }

}

int main(){
  inr arr[]={1,2,-3,3,-1,2};

  int n =sizeof(arr)/sizeof(arr[]);
  findZeroSumarrays(arr,n);

return 0;
}
