#include<iostream>
#include<cmath>
using namespace std;
 int binaryTodecimal(int n){
     //Division method
     int decimalno = 0;
     int i = 0;
     while(n > 0){
         int bit = n % 10;
         decimalno = decimalno + bit * pow(2, i);
         n = n / 10;
         i++;
     }
     return decimalno;
 }
 int main(){
        int n;
        cout << "Enter a binary number: ";
        cin >> n;
        int decimal = binaryTodecimal(n);
        cout << "Decimal equivalent: " << decimal << endl;
        return 0;
 }