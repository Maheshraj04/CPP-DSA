//  find the square root of a number using binary search
#include <iostream>
using namespace std;  

int findSqt(int n){
    int target = n;
    int s =0;
    int e =n;
    int mid = s+(e-s)/2;
    int ans =-1;

    while(s<=e){
if(mid*mid == target){
    return mid;
}
// left search
if(mid*mid> target){
    e = mid -1;
}
else{
    // ans store
    ans = mid;
    // right search
    s = mid+1;
}
mid = s+(e-s)/2;
    }
    return ans;
}
int main(){
 int n;
 cout<<"Enter the number: ";
 cin>> n;
 int ans = findSqt(n);  
 cout<<"Ans is:"<<ans<<endl;

 // for the accuret  floating ans
int precision ;
cout<<"Enter the number of floating digit in precison: ";
cin>> precision;
double step =0.1;
double finalAns =ans;
for(int i =0;i<precision;i++){
for(double j = finalAns;j*j<=n;j=j+step){
    finalAns =j;
}
step = step /10;
}
cout<<"Final ans is. "<<finalAns<<endl;
return 0;
}