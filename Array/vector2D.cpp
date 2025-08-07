// we use vector to create 2D array
#include<iostream>
#include<vector>
using namespace std;
int main(){
    // vector<vector<int> > arr ;

    // vector<int> a{1,2,3};
    // vector<int> b{4,5,6};
    // vector<int> c{6,7,8};

    // arr.push_back(a);
    // arr.push_back(b);
    // arr.push_back(c);

    // for(int i=0;i<arr.size();i++){
    //     for(int j =0;j<arr[0].size();j++){ // here we use 0 because when the row and coloum are same where diffrent we use i   
    //         cout<< arr[i][j]<<" ";
    //     }
    //     cout <<endl;
    // }

    // second method
//    int row =3;
//    int col =4; 
//    vector<vector<int> > arr(row, vector<int>(col,101));
//    for(int i=0;i<arr.size();i++){
//     for(int j =0; j<arr[i].size();j++){
//         cout<< arr[i][j]<<" ";
//     }

//     cout<< endl;
//    }
//     return 0;

int row =5;
int col =5;
vector<vector<int> > arr(row, vector<int>(col,-8));
for(int i =0;i<arr.size();i++){
    for(int j =0;j<arr[i].size();j++){
        cout << arr[i][j]<<" ";

    }
    cout<<endl;
}

}