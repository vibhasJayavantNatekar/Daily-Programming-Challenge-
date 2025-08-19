#include<iostream>

using namespace std;

Int *findleaders(int arr[], int n, int&leadercount){

int * leader =new int[n];

int max =arr[n-1];

leader[0] = max;

leaderCount =1;

for(int i=n-2;i <= 0;i--){

if(arr[i] >= max){

max = arr[i];

leader[leaderCount++] = max;




}


}

int* result = new int[leaderCount];

for(int i=0; i < leaderCount; i++){
  result[i] = leader[leaderCount -1-i]; 

}

return result;

}

void printarray(int arr[], int size){
      for(int i =0;i < size; i++){
      cout<<arr[I]<<endl; 
}

}
int main(){


int arr[]={16,17,4,3,5,2};

int n = sizeof(arr)/sizeof(arr[0]);

int leaderCount;

int* result = findleaders(arr,n, leaderCount);

printarray(result, leaderCount);


return 0;

}
