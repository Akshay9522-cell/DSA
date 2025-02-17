#include<iostream>
using namespace std;

  bool bnrySrch(int arr[],int s,int e,int k){

      if(s>e){
        return false;
      }
      int mid=s+(e-s)/2;

      if(arr[mid]==k){
        return true;
      }

      if(arr[mid]<k){
         return bnrySrch(arr,mid+1,e,k);
      } else{
         return bnrySrch(arr,s,mid-1,k);
      }
  }

int main(){

    int arr[]={2,4,6,10,14,16};
    int n=sizeof(arr)/sizeof(arr[0]);

    bool ans=bnrySrch(arr,0,n-1,1);

    if(ans){
        cout<<"element present";

    }else{
        cout<<"element is not present";
    }
}