#include<iostream>
using namespace std;
// n is parameter
void grade_of_student(int n){
    if(n>=90){
        cout<<"Grade: A";
    }
    else if(n>=80){
        cout<<"Grade: B";
    }
    else if(n>=70){
        cout<<"Grade: C";
    }
    else if(n>=60){
        cout<<"Grade :D";
    }
    else {
        cout<<"Grade : E";
    }
}


int main(){
    int n;
    cout<<"Enter the marks of the student:";
    cin>>n;
    //n is argument
    grade_of_student(n);
    return 0;
}
