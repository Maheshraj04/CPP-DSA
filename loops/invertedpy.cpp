#include<iostream>
using namespace std;
int main(){
     int n;
     cin >> n;
     for(int row = 0; row<n;row++){
//spaces
for(int col = 0;col<row;col++){
   cout << " ";
}
 
    for(int col = 0 ; col<n-row; col=col+1){
        cout<< "* ";
    }
     cout<< endl;
     }
    
return 0;
}