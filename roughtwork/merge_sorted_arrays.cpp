#include<iostream>
using namespace std;

void mergeArray(int arr1[],int n,int arr2[],int m,int arr3[]){

    int i=0;int j=0;int k=0;

    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            arr3[k++]==arr1[i++];
        } else{
             arr3[k++]==arr2[j++];
        }
    }

    //copy first array to k 

    while(i<n){
         arr3[k++]==arr1[i++];
    }

    while(j<m){
         arr3[k++]==arr2[j++];
    }
}

void print (int ans[],int n){
      for(int i=0;i<n;i++){
        cout<<ans[i];
      }
}

int main(){
    int arr1[]={1,2,3,4};
    int n=sizeof(arr1)/sizeof(arr1[0]);

    int arr2[]={5,6,7,8};
    int m= sizeof(arr2)/sizeof(arr2[0]);

    int arr3[]={0};

    mergeArray(arr1,n,arr2,m,arr3);
    print(arr3,8);

}