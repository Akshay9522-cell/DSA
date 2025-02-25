// #include<iostream>
// using namespace std;


// int partition(int arr[],int s,int e){
//       int pivot=arr[s];

//       int cnt=0;
//       for(int i=s+1;i<=e;i++){
//          if(arr[i]<=pivot){
//             cnt++;
//          }
//       }


//       int pivotIndex= s+cnt;
//       swap(arr[pivotIndex],arr[s]);

//       //left and right wala part sambhalete he

//       int i=s,j=e;

//       while(arr[i]<pivotIndex && arr[j]>pivotIndex){

//          while(arr[i]<pivot){
//             i++;
//          }
//          while(arr[j]>pivot){
//             j--;
//          }
//       }
//       if(arr[i]<pivotIndex && arr[j]>pivotIndex){
//            swap(arr[i++],arr[j--]);
//       }
//       return pivotIndex;
// }

// void quickSort(int arr[],int s,int e){
     
//      //base case
//      if(s>=e){
//         return;
//      }
//      // partition karo
//      int p=partition(arr,s,e);

//      //left part ko sort karenge
//       quickSort(arr,s,p-1);

//       // right part ko sort karenge

//       quickSort(arr,p+1,e);
// }

// int main(){

//     int arr[]={1,7,3,4,2,9,8};
//     int n=sizeof(arr)/sizeof(arr[0]);

//     quickSort(arr,0,n-1);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }

// }


// #include<iostream>
// using namespace std;

//   int partition(int arr[],int s,int e){

//          int pivot=arr[s];
//          int cnt=0;

//          for(int i=s+1;i<=e;i++){
//               if(arr[i]<=pivot){
//                 cnt++;
//               }
//          }
//          int pivotIndex=s+cnt;
//          swap(arr[pivotIndex],arr[s]);


//          int i=s,j=e;

//          while(arr[i]<pivotIndex && arr[j]>pivotIndex){

//              while(arr[i]<pivot){
//                 i++;
//              }
//              while(arr[j]>pivot){
//                 j--;
//              }

//               if(arr[i]<pivotIndex && arr[j]>pivotIndex){
//                 swap(arr[i++],arr[j--]);
//        }
//          }
//          return pivotIndex;
//   }


//  void quickSort(int arr[],int s,int e){

//        if(s>=e){
//         return;
//        }

//        int p= partition(arr,s,e);

//        quickSort(arr,s,p-1);

//        quickSort(arr,p+1,e);
//  }

// int main(){

//     int arr[]={4,5,6,77,33,22,55};
//     int n=sizeof(arr)/sizeof(arr[0]);

//     quickSort(arr,0,n);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

#include<iostream>
using namespace std;

 int partition(int arr[],int s,int e){
   
        int pivot=arr[s];
        int cnt=0;

        for(int i=s+1;i<=e;i++){
            if(arr[i]<=pivot){
               cnt++;
            }
        }

        int pivotIndex=s+cnt;
        swap(arr[pivotIndex],arr[s]);


        int i=s,j=e;

        while(arr[i]<pivotIndex && arr[j]>pivotIndex){

               while(arr[i]<pivot){
                   i++;
               }
               while(arr[j]>pivot){
                j--;
               }

               if(arr[i]<pivotIndex && arr[j]>pivotIndex){
                swap(arr[i++],arr[j--]);
               }
        }
        return pivotIndex;


 }

 void quickSort(int arr[],int s,int e){
      
      if(s>e){
        return;
      }
      int p=partition(arr,s,e);

      // sort left part
      quickSort(arr,s,p-1);
      // sort right part
      quickSort(arr,p+1,e);
 }

int main(){

     int arr[]={4,5,6,77,33,22,55};
     int n=sizeof(arr)/sizeof(arr[0]);

     quickSort(arr,0,n-1);
     for(int i=0;i<n;i++){
      cout<<arr[i];
     }

return 0;
}