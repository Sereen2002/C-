#include<iostream>
using namespace std;
int main()
{
    //declaring datatypes and variables where the info will be stored
    int number,multiple1,multiple2,multiple3;
    //i/o statements
    cout<<"enter a number : ";
    cin>>number;
    //multiplication operations
    multiple1=number*1;
    multiple2=number*2;
    multiple3=number*3;
    //output statament and multiples of the number entered
    cout<<"first three multiples of the number entered are "<<multiple1<<","<<multiple2<<","<<  multiple3 ;
    return 0;
}