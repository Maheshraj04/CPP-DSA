#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
for(int row = 0;row<n;row++){
    for(int col = 0 ;col<n-row;col+=1){
        cout<<"*";
    }
    cout<<endl;
}
}