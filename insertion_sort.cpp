#include<iostream>
using namespace std;

void inserstionSort(int arr[],int n){
     
     for(int i=1;i<n;i++){
        int curr=arr[i];
        int j=i-1;

        while(j>=0 && arr[j]>curr){
             arr[j+1]=arr[j];
             j--;
        }
        arr[j+1]=curr;
        
     }

}

int main(){

    int arr[]={4,1,3,2,5};
    int n=sizeof(arr)/sizeof(arr[0]);

    inserstionSort(arr,n);
}