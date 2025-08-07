#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int binarysearch(int arr[],int size,int target){
    int start = 0;
    int end = size -1;
    int mid = start +(end -start) /2;
    while (start<=end){
        int element = arr[mid];

        if (element == target){ // if element found return index
            return mid;
        }
        else if( target< element){
            // search in left
            end = mid-1;
        }
      else{
        // search right
        start = mid+1;
      }   
      mid =start +(end -start) /2; 
    }
    //element not founr
    return -1;
}


int main(){
  int arr[] = {2,4,6,8,10,12,16};
  int size = 7;
  int target = 2;
  
  int indexoftarget = binarysearch(arr, size,target);
  if(indexoftarget == -1){
    cout<<"Target is not found";
  }
  else{
    cout<<"Target is found at index: "<<indexoftarget<<" index"<<endl;
  }
    return 0;
}


