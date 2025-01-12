// #include<iostream>
// using namespace std;
// int main(){

//     // int a=10;

//     // int *p=&a;

//     // int ** p1=&p;

//     // // cout<<a<<endl;
//     // // cout<<*p<<endl;
//     // cout<<p<<endl;
//     // cout<<*(p1)<<endl;
//     // cout<<**(p1);






// }

//PASS BY REFERENCE
// #include<iostream>
// using namespace std;

//  void changeA(int *a){ // pass by refernce
    
//     *a=20;
//  }
// int main(){
//     int a=10;

//     changeA(&a);
//     cout<<a;
// }

// PASS BY ALIAS

// #include<iostream>
// using namespace std;

//  void changeA(int &b){ //pass by alias 
//       b=20;
//  }

// int main(){
//     int a=10;
//     changeA(a);
//     cout<<a;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={10,20,30,30};
      
//       int *ptr= arr;
//       int **ptr1=&ptr;
//        cout<<*ptr;

// }

// COMPARISON BETWEEN TWO POINTERS


#include<iostream>
using namespace std;
int main(){
   
   int arr[]={10,20,30,40};
    int *ptr2;
    int *ptr1=ptr2+2;
     cout<<ptr2<<endl; 
    cout<<ptr1-ptr2;
}