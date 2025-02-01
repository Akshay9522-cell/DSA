#include<iostream>
using namespace std;

void twoSum(int arr[],int n,int target){

     for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
              cout<<"indices "<<i<<" and"<<" "<<j;
              return;
            }
            
        }
      
     }
}

int main(){
    int arr[]={1,2,34,6,5,6,7};
    int target;
    cin>>target;
    int n=sizeof(arr)/sizeof(arr[0]);

       twoSum(arr,n,target);
}