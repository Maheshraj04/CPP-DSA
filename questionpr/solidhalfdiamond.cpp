// printing solid half diamond
#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  for(int i = 0;i<2*n-1;i++){
    int con = 0;
    if(i<n){//growing phase of diamond
        con = i;

    }
    else{// shrinking phase of diamond
        con = n-(i%n) - 2;
    }
    for(int j =0;j<=con;j++){
        cout<<"*";
    }
    cout<<endl;
  }  
}