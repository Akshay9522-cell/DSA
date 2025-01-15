// #include<iostream>
// using namespace std;

// int peakElement(int arr[],int n){
       
//        int s=0;
//        int e=n-1;
//        int mid=s+(e-s)/2;

//        while(s<e){
//           if(arr[mid]<arr[mid+1]){
//             s=mid+1;
//           }else{
//             e=mid;
//           }
//           mid=s+(e-s)/2;
//        }
//        return s;
// }

// int main(){
//     int arr[]={3,4,5,6};
//     int n=sizeof(arr)/sizeof(arr[0]);

//     int ans=peakElement(arr,n);
//     cout<<ans;

// }

#include<iostream>
using namespace std;

 int peakElement(int arr[],int n){

      int s=0;
      int e=n-1;

      int mid=s+(e-s)/2;

      while(s<e){
          
          if(arr[mid]<arr[mid+1]){
               s=mid+1;
          }else{
             e=mid;
          }
          mid=s+(e-s)/2;
      }
      return s;
 }

int main(){
  int arr[]={12,3,4,55,96,89};
  int n=sizeof(arr)/sizeof(arr[0]);

  cout<<peakElement(arr,n);

}
