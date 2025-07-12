#include<iostream>

using namespace std;


int decimialTobinaryMethod1(int n){
    //Division method
    int binaryno =0;
        int i=0;
        int palce = 1;
    while(n>0){
        int bit = n%2;
        binaryno = bit * palce + binaryno;
        palce = palce * 10;
        cout<<bit<<endl;
        n=n/2;
       
    }
     return binaryno;

}
int decimialTobinaryMethod2(int n){
    //bitwise shift method
    int binaryno =0;
        int i=0;
        int palce = 1;
    while(n>0){
        int bit = (n & 1);
        binaryno = bit * palce + binaryno;
        palce = palce * 10;
        n = n >> 1;
       
    }
     return binaryno;

}
int main(){
    int n;
    cin>>n;
    int binary = decimialTobinaryMethod1(n);
    cout<<binary<<endl;
}