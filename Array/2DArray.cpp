// All about 2D Array

#include<iostream>
#include<limits.h>
using namespace std;

bool findkey(int arr[][3],int rows,int cols,int key){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(arr[i][j]==key)
            return true ;
        }
    }
    // valuse is not present
 return false ;
}


// to get the sum of a row of a element we are creating the function
void printRowWiseSum(int arr[][3],int rows,int cols){
// row sum -> row wise traversal
cout<<"Printing row wise sum "<<endl;
for(int i=0;i<rows;i++){
    int sum =0;
    for(int j =0;j<cols;j++){
        sum = sum+arr[i][j];
    }
    cout<<sum<<endl;
}
}
// get value maximun and min in a array
int getMax(int arr[][3],int cols,int rows){
    int maxi = INT_MIN;
    for(int i =0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(arr[i][j]>maxi){
                maxi = arr[i][j];
            }
        }
    }
    return maxi;
}


// for the minimum number the we are creating a function
int getMin(int arr[][3],int cols,int rows){
    int min = INT_MAX;
    for(int i =0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(arr[i][j]<min){
                min = arr[i][j];
            }
        }
    }
    return min;
}

//Transpose of a matrix for the transpose we are creating this function
void transpose( int arr[][3],int r,int c , int transposeArr [][3]){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            // swap(arr[i][j],arr[j][i]); //// we are not doing swap becouse doing swap it will swap 2 time and print the same array 
            transposeArr[j][i]= arr[i][j];
        }
    }
}
// to print the transpose array
void printarray(int arr[][3],int r ,int c ){
    for(int i=0 ;i<r;i++){
        for(int j =0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    //declare 2D array
//     int arr[3][3];

//     //initilisation
// int brr[3][3] ={
//     {1,2,3},
//     {4,5,6,},
//     {7,8,9}};
//     cout <<brr[2][2]<<endl;
//     // row wise print
//     //outer loop
//     for(int i =0;i<3;i++){
//         //for every row, we need to print value in each column
//         for(int j=0;j<3;j++){
//             cout <<brr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// cout<<"Printing coloumn Wise:"<<endl;
//     //column wise print
//  for(int i =0;i<3;i++){
//         //for every row, we need to print value in each column
//         for(int j=0;j<3;j++){
//             cout <<brr[j][i]<<" ";
//         }
//         cout<<endl;
//     }




int arr[3][3];
int rows =3;
int col = 3;
//Row wise input 
for(int i =0;i<rows;i++){
    for(int j =0;j<col;j++){
        cin>>arr[i][j];
    }
}
cout<<"Printing row wise"<<endl;
for(int i =0;i<rows;i++){
    for(int j =0;j<col;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
// printRowWiseSum(arr,rows,col);

// int key =1;
// if(findkey(arr,3,3,17)){
//     cout <<"True"<<endl;
// }
// else{
//     cout<< "False";
// }


// cout<<"Max Number :"<<getMax(arr,rows,col)<<endl;
// cout<<"Min Number :"<<getMin(arr,rows,col)<<endl;


cout<<"Printing array "<<endl;
printarray(arr,rows,col);
cout <<"Starting Transpose "<<endl;
int transposeArr[3][3];
transpose(arr,rows,col,transposeArr);
cout<<"Printing Array agin:"<<endl;
printarray(transposeArr,rows,col);


    return 0;

}