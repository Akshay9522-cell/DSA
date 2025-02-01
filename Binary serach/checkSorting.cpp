// #include<iostream>
// using namespace std;

// bool isSorted(int arr[],int n){

//     if(n==0 || n==1){
//         return true;
//     }
//     if(arr[0]>arr[1]){
//         return false;
//     }

//     int remainingPart= isSorted(arr+1,n-1);
//     return remainingPart;
// }

// int main(){
//     int arr[]={1,2,7,4,5};
//     int n=sizeof(arr)/sizeof(arr[0]);

//     bool ans=isSorted(arr,n);
//     if(ans){
//         cout<<"array is sorted"<<endl;
//     } else{
//         cout<<"array is not sorted";
//     }
// }


#include<iostream>
using namespace std;

bool isSorted(int arr[],int n){
      if(n==1 || n==0){
        return 0;
      }
      if(arr[0]>arr[1]){
        return false;
      }
      int remaining= isSorted(arr+1,n-1);
      return remaining;
}

int main(){
    int arr[]{1,2,6,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);

    bool ans=isSorted(arr,n);
    if(ans){
        cout<<"sorted"<<endl;
    } else{
        cout<<"not sorted";
    }
}