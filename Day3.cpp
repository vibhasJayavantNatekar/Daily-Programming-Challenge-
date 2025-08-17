#include<iostream>



using namespace std;

int FindDuplicate(int arr[] , int n){


   
   for(int i=0;i < n ; i++){

         for(int j =i+1 ;j <n;j++){
            if(arr[i] == arr[j]){
               return arr[i];
            }

         }
   }



   return false;

}


int main(){
 int arr[] ={1,3,4,2,2};

int n = sizeof(arr) /sizeof(arr[0]);


cout<<FindDuplicate(arr , n);


    return 0;
}
