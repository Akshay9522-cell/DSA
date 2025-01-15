#include<iostream>
using namespace std;

  int Fact(int num){
      if(num==1){
        return 1;
      }
      return num+Fact(num-1);
  }


int main(){
    int num;
    cout<<"enter"<<endl;
    cin>>num;

    int ans=Fact(num);
    cout<<ans;
}