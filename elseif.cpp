#include<iostream>
using namespace std;
int main()
{
    int num=0;
    cout<<"Enter a number : ";
    cin>>num;
    if(num>10)
    {
        cout<<"The number entered is greater than 10 ";
    } 
    else if(num<10)
    {
        cout<<"Entered number is less than 10 ";
    }
    else
    {
        cout<<"Entered number is equal to 10 ";
    }
    return 0;
}