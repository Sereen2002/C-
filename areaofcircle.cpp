#include<iostream>
using namespace std;
int main()
{
    //declaring var and its datatypes
    float radius;//=4.0;<-----i have given 2 options : default radius can be given or 
    //user can enter the radius 
    float area;
    //cout & cin statement for entering the radius by user 
    cout<<"Enter the radius of the circle : ";
    cin>>radius;
    //formula to calculate area and cout stmnt for displaying area after applying formula 
    area=3.14159*radius*radius;
    cout<<"The area of circle for given radius is : "<<area<<endl;
    return 0;
}