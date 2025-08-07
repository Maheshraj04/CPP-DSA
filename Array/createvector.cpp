#include<iostream>
#include<vector>
using  namespace std;
int main(){
    //create vector
    vector<int> arr;
// size tell us how many element is stored in a arry
    cout<< arr.size() << endl;
// capacity tell us total storage avilable and how many element we can store
    cout<< arr.capacity() << endl;

    // insert element
    arr.push_back(5);
    arr.push_back(6);
    arr.push_back(10);

    // printing
    for(int i = 0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout << endl;
    // to remove the element we use popback function 
    arr.pop_back();
    //print 
     for(int i = 0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<< endl;
    // creating a vector of user required size


int n;
cout<<"Enter the value of n: "<<endl;
cin>> n;
    vector<int> brr(n,-1);
    cout<< "Size of b:"<<brr.size()<< endl;
    cout<< "Capacity of b:"<< brr.capacity()<<endl;
      for(int i = 0; i<brr.size(); i++){
        cout<<brr[i]<<" ";
    }
    cout<< endl;



cout<<"Printing crr :"<<endl;
    vector<int >crr{10,20,30};
     for(int i = 0; i<crr.size(); i++){
        cout<<crr[i]<<" ";
    }
    cout<< endl;

    cout<<"Enter crr is empty or not: "<<crr.empty()<<endl;

    vector<int> drr;
    cout<<"vector drr is empty or not:"<<drr.empty()<<endl;

    return 0;
}