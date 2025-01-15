#include<iostream>
#include<vector>
using namespace std;

  int binSrch(vector<int>arr,int s,int e,int key){
        
        if(s<=e){
            int mid=s+(e-s)/2;

            if(key==arr[mid]){
                return mid;
            }
             
            if(key>arr[mid]){
               binSrch(arr,mid+1,e,key);

            } else{
                binSrch(arr,s,mid-1,key);
            }
            
            
        }
        return -1;
  }
   

  int search(vector<int>arr,int key){
      return  binSrch(arr,0,arr.size()-1,key);
  }
   
int main(){

 vector<int>arr={12,3,4,5,6,7};


  cout<<search(arr,12);
    
}