#include<iostream>
#include <limits.h>
using namespace std;
int main(){
//  // count zeors and 1 in array
//   int arr[]  ={0,0,1,0,1,0,0,0,1,1,1,0,1,0,1,0,1,0,1};
//   int size = 19;
//   int numZero = 0;
//   int numOne = 0;
//  for(int i =0 ; i< size; i++){
//     if(arr[i] == 0){
//         numZero++;
//     }
//     if(arr[i]==1){
//         numOne++;
//     };
//  } 
//    cout << "Number of Zero: "<< numZero <<endl;
//    cout << "Number of One: "<<numOne <<endl;



  // // maximum number in arry 
//   // when we have to find the maximun and min value in array
//   // we initilise the maximun with INT_MIN vice versa
// int maxi = INT_MIN;
// int arr[] ={1,2,3,4,34,6,7,8,9};
// int size =9;
// //intilise the maxi variable with the 
// //mini possible int value
// for(int i =0 ;i< size; i++){
//     if(arr[i]> maxi){
//        maxi = arr[i]; 
//     }
// }
// cout<< "Maximum number in a Array is:"<< maxi<< endl;

// find the min number in array 
 int min = INT_MAX;
 int arr[]= {-1,3,4,5,6,-2,-45,6,7,9};
 int size = 10;
 for(int i = 0 ; i< size;i++){
   if (arr[i]<min){
    min = arr[i];
   }
 }
cout<< "MInimun number un a array is:"<< min<< endl;
   return 0;
}