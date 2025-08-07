#include<iostream>
using namespace std;
long long int factorial(long long int n){
  long long int f= 1;
    for(int i=1;i<=n;i++){
    f =   f*i;
    }
    return f ;
}
int main(){
int n;
cout<<"Enter the number to calculate the factorial: ";
cin>>n;
long long int fact = factorial(n);
cout<< "Factorial of n:"<<fact<<endl;
}