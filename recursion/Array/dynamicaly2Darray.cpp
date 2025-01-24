#include<iostream>
using namespace std;
int main(){

  int row;
  cin>>row;

  int col;
  cin>>col;

  //CREAE 2D DYNAMICALLY ARRAY

    int **arr=new int*[row];
    for(int i=0;i<row; i++){
         arr[i]=new int[col];
    }

    //TAKING INPUT

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }

    // TAKING OUTPUT

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        } cout<<endl;
    }

    // released memory

    for(int i=0;i<row;i++){
        delete[] arr[i];
    }

    delete[] arr;
}