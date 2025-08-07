#include<iostream>
using namespace std;
int main(){
    int arr [10];
    cout<<"Enter the value of array"<<endl;
    // taking input arry 
    for(int i = 0 ;i<10;i++){
        cin>>arr[i];
    }
    cout <<"Printing the value in array:"<<endl;
    //printing the array
    for(int i = 0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}