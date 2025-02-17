// #include<iostream>
// using namespace std;

// void reverse(string &str,int s,int e){
//       if(s>e){
//         return  ;
//       }
//       swap(str[s],str[e]);
//       s++;
//       e--;
//       reverse(str,s,e);
// }

// int main(){
//      string str="akshay";
//      int n=str.length()-1;
//      reverse(str,0,n);
//      cout<<str;
     
// }

// #include<iostream>
// using namespace std;

// void reverse(string &str,int s,int e){
     
//      if(s>e){
//         return;
//      }
//      swap(str[s],str[e]);
//      s++;
//      e--;
//      reverse(str,s,e);
// }

// int main(){
//     string str="akki";
//     int n=str.length()-1;

//     reverse(str,0,n);
//     cout<<str;
// }

#include<iostream>
using namespace std;

void reverse(string &str,int s,int e){

    if(s>e){
        return;
    }
    swap(str[s],str[e]);
    s++;
    e--;

    reverse(str,s,e);


}

int main(){

    string str="atika";
    int n=str.length()-1;

    reverse(str,0,n);
    cout<<str;
return 0;
}