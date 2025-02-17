// check array is sorted or not

// #include<iostream>
// using namespace std;

//  bool checkSorting(int arr[],int n){
        
//         if(n==0 || n==1){
//             return true;
//         }
//         if(arr[0]>arr[1]){
//             return false;
//         }

//         int rem=checkSorting(arr+1,n-1);
//         return rem;
//  }

// int main(){
//     int arr[]={4,2,3,4,5};
//     int n=sizeof(arr)/sizeof(arr[0]);

//     int ans=checkSorting(arr,n);
//     if(ans){
//         cout<<"array is sorted";
//     }else{
//         cout<<"array is not sorted";
//     }

// }


// sum of arrays element
// #include<iostream>
// using namespace std;

//  int sumOfArray(int arr[],int n){
//     cout<<n<<endl;
//        if(n<=0){
//         return 0;
//        }
//        return arr[n-1]+sumOfArray(arr,n-1);
//  }

// int main(){

//     int arr[]={1,2,3,4,5};
//     int n=sizeof(arr)/sizeof(arr[0]);

//     int ans=sumOfArray(arr,n);
//     cout<<ans;
// return 0;
// }

//search key by recursion

// #include<iostream>
// using namespace std;


//  bool searchKey(int arr[],int n,int k){
        
//        if(n==0){
//         return false;
//        } 
//        if(arr[0]==k){
//         return true;
//        }
//        int rem=searchKey(arr+1,n-1,k);
//        return rem;
//     }

// int main(){

//  int arr[]={12,3,4,56,78,9};
//  int n=sizeof(arr)/sizeof(arr[0]);
// int k=55;
//  int ans=searchKey(arr,n,k);
//  if(ans){
//     cout<<"key is present";
//  } else{
//     cout<<"key is absent";
//  }

// return 0;
// }

// binary search by recursion

// #include<iostream>
// using namespace std;

//   bool binarySearch(int arr[],int k,int s,int e){
         
//          if(s>e){
//             return false;
//          }
//          int mid=s+(e-s)/2;

//          if(arr[mid]==k){
//             return true;
//          }

//          if(arr[mid]<k){
//           return  binarySearch(arr,k,mid+1,e);
//          } else{
//            return   binarySearch(arr,k,s,mid-1);
//          }
//   }   

// int main(){

//     int arr[]={2,4,6,10,14,16};
//     int n=sizeof(arr)/sizeof(arr[0]);

//     int ans=binarySearch(arr,44,0,n-1);
//     if(ans){
//         cout<<"key is present";
//     } else{
//         cout<<"key is absent";
//     }
// return 0;
// }
