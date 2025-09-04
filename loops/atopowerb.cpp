// find the a to the power of b there is two method one is fast and
// another one is slow

#include<iostream>
using namespace std;

int slowExponentiation(int a,int b){
    int ans = 1;
for(int i=0;i<b;i++){
ans*=a; 
}
return ans;
}// time complaxity is o(b)

// M2 which is fast and its time complaxity is olog(b)
int FastExponention(int a,int b){
int ans = 1;
while(b>0){
    if(b & 1){
        //odd
        ans = ans*a;
    }
    a = a*a;
    b>>=1;
}   
return ans;
}
int main(){
cout<<slowExponentiation(5,4)<<endl;;
cout<< FastExponention(5,4);
    return 0;
}
