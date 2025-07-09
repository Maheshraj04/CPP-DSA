 #include<iostream>
 using namespace std;
 int main(){
    int n ;
    cin >> n;
    //hollow dimiond
    for(int row = 0 ; row<n;row++ ){
        // spaces
        for(int col = 0;col <n-row-1 ; col = col-1){
           cout<<" "; 
        }
        //stars
        for (int col = 0; col<2*row+1; col++){
         //if first char or iff last char is star else space
         if(col==0){
            cout<<"*";
         }
         else if(col==2*row){
            cout<<"*";
         }
         else{
            cout<<" ";
         }
        }
        cout<< endl;
    }

 }
