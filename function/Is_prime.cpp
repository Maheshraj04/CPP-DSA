//check the number is prime or not?
  #include<iostream>
  using namespace std;
  bool checkprime(int n){
    int i =2;
    for(i = 2;i<n;i++){
        if(n%i==0){
            return false;
        }
        else {
            return true;
        }
    }
  }
  int main(){
    int n;
    cout<<"Enter the number you want to check is prime or not: ";
    cin>>n;
    bool isprime = checkprime(n);
    if(isprime){
        cout<<"Prime\n";
    }
    else{
        cout<<"Not a prime";
    }
    return 0;
  }