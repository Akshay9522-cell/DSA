#include<iostream>
using namespace std;

bool isPalindrome(string str,int s,int e){
     
     if(s>e){
        return true;
     }
     if(str[s]!=str[e]){
        return false;
     }else{
        return isPalindrome(str,s+1,e-1);
     }
     
     

}

int main(){
     string str="ABBcA";
     int n=str.length()-1;

   bool ans=isPalindrome(str,0,n);
   if(ans){
    cout<<"this is palindrome"<<endl;
   } else{
    cout<<"not a palindrome";
   }
    

}