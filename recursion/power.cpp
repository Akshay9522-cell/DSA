// #include<iostream>
// using namespace std;

//  int power(int n){
//       if(n==0){
//         return 1;
//       }
//       return 2*power(n-1);
//  }

// int main(){

//     int n;
//     cin>>n;
//     cout<<power(n);
// }


// PRINTING COUNTING 

// #include<iostream>
// using namespace std;

// int Counting(int n){
//     if(n==6){
//         return 6;
//     }
//     cout<<n;
//     return Counting(n+1);
// }

// int main(){
//     int n;
//     cin>>n;

//     cout<<Counting(n);
// }

#include<iostream>
using namespace std;

int fibo(int n){
     if (n == 0) {
        return 0; // Base case: F(0) = 0
    } else if (n == 1) {
        return 1; // Base case: F(1) = 1
    } else {
        return fibo(n - 1) + fibo(n - 2); // Recursive case
    }
}

int main(){
    int n;
    cin>>n;

    cout<< fibo(n);
}