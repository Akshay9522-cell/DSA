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

#include<iostream>
using namespace std;

 void bubbleSort(int arr[],int n){
      
      for(int i=0;i<n;i++){
            bool swapped=false;
        for(int j=0;j<n-i;j++){

           if(arr[j]>arr[j+1]){
         
            swap(arr[j],arr[j+1]);
            swapped=true;
           }
           
        }
       
         if(swapped==false){
           break;
        }
         cout<<arr[i];
      }
     
 }

int main(){
   int arr[]={6,2,8,4,10};
   int n=sizeof(arr)/sizeof(arr[0]);

   bubbleSort(arr,n);
}

