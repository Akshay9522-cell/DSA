// By apna college

//#include<iostream>
// using namespace std;

// void selection(int arr[],int n){
//     for(int i=0;i<n;i++){
//         int SI=i;  //ASSUME smallest indx of unsorted array
//         for(int j=i+1;j<n;j++){
//             if(arr[j]<arr[SI]){
//                 SI=j;
//             }
//         }
//        swap(arr[i],arr[SI]);
//        cout<<arr[i];
//     }
// }

// int main(){
//     int arr[]={4,1,5,2,3};
//     int n=sizeof(arr)/sizeof(arr[0]);

//     selection(arr,n);
// }

// By love babbar

#include<iostream>
using namespace std;

 void selectionSort(int arr[],int n){
     
     for(int i=0;i<n;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        swap(arr[i],arr[min]);
        cout<<arr[i];
     }
 }

int main(){
    int arr[]={6,2,8,4,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr,n);
}