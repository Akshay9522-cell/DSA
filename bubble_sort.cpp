// By apna college

// #include<iostream>
// using namespace std;

// void bubbleSort(int arr[],int n){
//     for(int i=0;i<n;i++){
//         bool isSwap=false;
//      for(int j=i+1;j<n;j++){
//          if(arr[i]>arr[j]){
//             swap(arr[i],arr[j]);
//             isSwap=true;
//          }
//      }
//      if(!isSwap){
//         break; 
//      }
//       cout<<arr[i];
//    }
  
// }

// int main(){

//     int arr[]={9,6,7,8,4,2,1,5,3};
//     int n=sizeof(arr)/sizeof(arr[0]);

//     bubbleSort(arr,n);
// }


//By love babbar

// #include<iostream>
// using namespace std;

//  void bSort(int arr[],int n){

//    for(int i=0;i<n;i++){
//       for(int j=0;j<n-i-1;j++){
//          if(arr[j]>arr[j+1]){
//                swap(arr[j],arr[j+1]);
//          }
      
//       }
     
//       cout<<arr[i];
//    }
//  }

// int main(){
//     int arr[]={4,6,4,6,7,8,99};
//     int n=sizeof(arr)/sizeof(arr[0]);

//     bSort(arr,n);
// }


#include<iostream>
using namespace std;

 void bubble(int arr[],int n){
     
     for(int i=0;i<n-1;i++){
      for(int j=0;j<n-i-1;j++){
          if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
          }
      }
      cout<<arr[i];
     }
 }


int main(){

   int arr[]={9,2,3,4,6,5,4,8,1};
   int n=sizeof(arr)/sizeof(arr[0]);
   bubble(arr,n);
return 0;
}