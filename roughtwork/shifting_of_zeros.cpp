#include<iostream>
using namespace std;

void shiftingZeros(int arr[],int n){
       int i=0;
       for(int j=0;j<n;j++){
          if(arr[j]!=0){
             swap(arr[i],arr[j]);
             i++;
          }      
       }
}
void print (int arr[],int n){
     for(int i=0;i<n;i++){
        cout<<arr[i];
     }
}

int main(){
     int arr[]={1,0,8,0,3,0,4,0,5,0};
     int n= sizeof(arr)/sizeof(arr[0]);

     shiftingZeros(arr,n);
     print(arr,n);

}