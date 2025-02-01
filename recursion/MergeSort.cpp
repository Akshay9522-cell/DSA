#include<iostream>
#include<vector>
using namespace std;


void merge(vector<int>arr,int s,int mid,int e){
      
      // create temporary array
      vector<int>temp;

      int i=s,j=mid+1;

      while(i<=mid && j<=e){
         if(arr[i]<arr[j]){
            temp.push_back(arr[i]);
            i++;
         } else{
            temp.push_back(arr[j]);
            j++; 

         }
      }

      while(i<=mid){
         temp.push_back(arr[i]);
            i++;
      }
      while(j<=e){
         temp.push_back(arr[j]);
            j++;
      }

      // copy the values of temp in the original array

      for(int idx=0;idx<temp.size();idx++){
         arr[idx+s]=temp[idx];
      }
      
}

void mergeSort(vector<int>arr,int s,int e){

    if(s<e){
        int mid=s+(e-s)/2;

        //for left side
        mergeSort(arr,s,mid);

        //for right side
        mergeSort(arr,mid+1,e);

        merge(arr,s,mid,e);
    }
}

int main(){

    vector<int> arr={12,31,35,8,32,17};
    
    mergeSort(arr,0,arr.size()-1);
    for(int val:arr){
        cout<<val<<"  ";
    }
    cout<<endl;
}