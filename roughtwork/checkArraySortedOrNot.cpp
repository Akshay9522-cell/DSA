#include<iostream>
#include<vector>
using namespace std;

void check(vector<int>&arr){
     int count=0;
     int n=arr.size();

     for(int i=1;i<n;i++){
         if(arr[i-1]>arr[i])
         count++;
     }
       if(arr[n-1]>arr[0]){
        count++;
       }

    if(count <=1){
        cout<<"array is sorted";
    } else{
        cout<<"array is not sorted";
    }
}

int main(){
   
   vector<int>arr={1,5,3,4,5};

   check(arr);

    
}