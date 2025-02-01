#include<iostream>
using namespace std;

 int sum(int arr[],int n){

      if(n<=0){
        return 0;
      }
      return arr[n-1]+sum(arr,n-1);
 }

int main(){

    int arr[]={3,2,5,1,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<sum(arr,n);
}