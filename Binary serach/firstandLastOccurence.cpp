// #include<iostream>
// using namespace std;

// int leftOccu(int arr[],int n,int key){
//      int s=0;
//      int e=n-1;
//     int mid=s+(e-s)/2;
//     int ans=-1;

//     while(s<=e){
//         if(arr[mid]==key){
//             ans=mid;
//             e=mid-1;
//         }
//         if(key>arr[mid]){
//             s=mid+1;
//         }else{
//             e=mid-1;
//         }
//         mid=s+(e-s)/2;
//     }
//     return ans;
// }
// int rightOccu(int arr[],int n,int key){
//      int s=0;
//      int e=n-1;
//     int mid=s+(e-s)/2;
//     int ans=-1;

//     while(s<=e){
//         if(arr[mid]==key){
//             ans=mid;
//             s=mid+1;
//         }
//         else  if(key>arr[mid]){
//             s=mid+1;
//         }else{
//             e=mid-1;
//         }
//         mid=s+(e-s)/2;
//     }
//     return ans;
// }


// int main(){

//     int arr[]={1,2,3,3,3};
//     int n=sizeof(arr)/sizeof(arr[0]);

//     int res=leftOccu(arr,n,3);
//     int res1=rightOccu(arr,n,3);
//     cout<<res<<res1;
// }



#include<iostream>
using namespace std;

 int leftOccure(int arr[],int n,int key){
       int s=0;
       int e=n-1;
       int ans=-1;

       int mid=s+(e-s)/2;

       while(s<=e){
             if(key==arr[mid]){
                  ans=mid;
                  e=mid-1;
                
             }

             if(key>arr[mid]){
                s=mid+1;
             } else{
                e=mid-1;
             }
             mid=s+(e-s)/2;
       }
       return ans;
 }

 int rightOccure(int arr[],int n,int key){
       int s=0;
       int e=n-1;
       int ans=-1;

       int mid=s+(e-s)/2;

       while(s<=e){
             if(key==arr[mid]){
                 ans=mid;
                  s=mid+1;
             }

             if(key>arr[mid]){
                s=mid+1;
             } else{
                e=mid-1;
             }
             mid=s+(e-s)/2;
       }
       return ans;
 }

int main(){
    
    int arr[]={5,7,7,8,8,10};
    int n=sizeof(arr)/sizeof(arr[0]);

    cout<<leftOccure(arr,n,8);
    cout<<rightOccure(arr,n,8);

}