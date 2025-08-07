#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i =0; i<size;i++){
cout<< arr[i]<< " ";
    }
    cout << endl;
}
void inc(int arr[],int size){
    arr[0]=arr[0]+10;
    printArray(arr,size);
}

bool find (int arr[], int size , int key){
    for(int i =0;i< size;i++){
        if(arr[i]==key)
        return true;
    }
    // not  present 
    return false;
}
int main(){
//    int arr[]={5,6};
//    int size = 2;
//    inc(arr, size);  
//    printArray(arr,size);

// linear search
int arr[5]={1,2,3,4,5};
int size =5;
cout << "Enter the key to find"<< endl;
int key;
cin >> key;
if(find(arr,size,key)){
    cout <<"found"<< endl;
}
else {
    cout <<"Not found "<< endl;
}
    return 0;
}