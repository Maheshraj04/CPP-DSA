#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
     for(int row = 0; row<n;row=row+1){
        int start = row+1;
        for(int col = 0;col<row+1;col=col+1){
            cout<< start<<" ";
            start =start+1;
        }
        cout<<endl;
     }
}