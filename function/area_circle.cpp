#include<iostream>
using namespace std;
float circle_area(float radius){
    float area = 3.14 *radius*radius;
    return area;
}
int main(){
   int radius;
   cout<< "Enter the radius of a circle: ";
   cin>> radius;
   float area = circle_area(radius);
   cout<<"The Area of circle is: "<< area<< endl; 

}