#include<iostream>
using namespace std;
void helloworld(){   //void is a return type
 int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i =0; i<n;++i){
        cout<<"Hello World!"<<endl;
    }
}
int main(){
  helloworld() ;
}