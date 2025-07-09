#include<iostream>
using namespace std;
int getsum(int a,int b){
    int res=a+b;
    return res;
}
int main(){
int a,b;
cout<<"Enter thevalue of a,b:";

cin>>a>>b;
int sum = getsum(a,b);
cout<<"The sum is: "<<sum<<endl;
}