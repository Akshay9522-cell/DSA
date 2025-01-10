#include<iostream>
using namespace std;

 int binarySrch(int arr[],int n,int key){
     
     int s=0;
     int e=n-1;
    int mid=(s+e)/2;
     while(s<=e){
         
         if(arr[mid]==key){
            return mid;
         }
         if(key>arr[mid]){
            s=mid+1;
         }
         if(key<arr[mid]){
            e=mid-1;
         }
         mid=(s+e)/2;
     }
     return -1;
 }

int main(){
    int arr[]={2,4,6,8,12,18};
    int arr1[]={3,8,11,14,16};
    int n=sizeof(arr)/sizeof(arr[0]);

    int ans=binarySrch(arr1,n,11);
    cout<<"index of 11 is:"<<ans;


}