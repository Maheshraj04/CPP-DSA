// find first occurence of element
#include<iostream>
#include<vector>
#include<algorithm> // this is use for inbuit function lowebound
using namespace std;
int FirstOccurence(vector<int> arr, int target){
   int s =0;
   int e = arr.size() -1;
   int mid = s +(e-s)/2;
   int ans =-1;


   while(s<=e){
    if(arr[mid]== target){
        // ans store
        ans = mid;
        // left store
        e = mid -1;
    }
    else if (target< arr [mid]){
        // left me search 
        e = mid -1;
    }
    else if(target > arr[mid]){
        // right me search
        s = mid + 1;
    }
    mid = s +(e-s)/2;
   }
   return ans;
}

int main(){
    vector<int> v{1,3,4,4,4,4,6,7};
    int target = 4;
    int indexOfFirstOcc = FirstOccurence(v,target);
    cout <<"Ans is: "<< indexOfFirstOcc << endl;


    // Using lower_bound from the algorithm library
   auto ans2 = lower_bound (v.begin(), v.end(), 4);
   cout<<"ans2 is: "<<ans2-v.begin() << endl;
    return 0;

}