#include<iostream>
using namespace std;
bool checkeven(int n){
    if(/*n%2==0*/ (n&1)==0){  // we are using bit wise operator to check even or odd
        return true;//its an even no.
    }
    else {
        return false;// its an odd no.
    }
}


int main(){
    int number ;
    cout<<"Enter the number :";
    cin>>number;
    bool iseven = checkeven(number);
    if(iseven){
        cout<<number<<" is even number.\n ";
    }
    else{
        cout<<number<<" is odd number. ";
    }
    return 0;
}