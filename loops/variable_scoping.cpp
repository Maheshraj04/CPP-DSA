#include<iostream>
using namespace std;
int amit = 429; //global variable this i can use any where in my code
//we generaly not prefer to deleare globale variable 
int main(){
    //variable scoping
    int a;
    //initilzation
    int b = 5;  
    //updation
    b =10; 
    cout<< amit<<endl;
    // int b = 6 ;//this will show an error
    if(true){
        int b = 15; //local variable always define in block of code other than that they are not accessable
        cout<<b<<endl;
        cout<<amit<<endl;
    }
    cout<<b<<endl;
}