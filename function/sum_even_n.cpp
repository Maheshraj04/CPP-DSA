#include<iostream>
using namespace std;
int sumofn(int n){
    int sum =0;
    for(int i =2 ;i<=n;i=i+2){
        sum = sum+i;
    }
    return sum;
}
int main(){
    int n;
    cout<< "Enter the number:";
    cin>>n;
    int ans = sumofn(n);
    cout<<"Sum of "<< n <<" even number "<<ans<<endl;
}