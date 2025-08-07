//find unique element in a array
#include<iostream>
#include<vector>
using namespace std;
int findUnique(vector<int> arr){
    // we initilise the ans with 0 becouse any number with xor function return number
    int ans =0 ;
    for(int i =0 ;i<arr.size();i++){
        ans = ans ^arr[i];
    }
    return ans;
}

 int main(){

    int n;
    cout<<"Enter the value n: "<<endl;
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the element: "<<endl;
    //taking the input 
    for(int i=0;i<arr.size();i++){
cin>> arr[i];
    }
    int uniqueElement = findUnique(arr);
    cout <<"Unique Element is: " << uniqueElement<<endl;
    return 0;
 }