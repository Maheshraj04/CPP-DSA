#include<iostream>
using namespace std;
int maxnum(int a,int b,int c){
    if (a>b && a>c){
        return a;
    }
    else if(b>a && b>c){
        return b;
    }
    else{
        return c;
    }
}
int main(){
    int a,b,c;
    cin >>a>>b>>c;
    int maximum_number = maxnum(a,b,c);
    cout<<"Max number is:";
   cout <<  maximum_number<<endl;
}