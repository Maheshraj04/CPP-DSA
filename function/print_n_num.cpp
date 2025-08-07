#include<iostream>
using namespace std;
void printcounting(int n){  //declaration of function
    for(int i =1;i<=n;i++){
        cout<< i<<" ";
    }
    cout<<endl;
}


int main(){
    int n;
    cout<<"Enter thr number n:";
    cin>> n;
    printcounting(n);//calling of function
    return 0;
}