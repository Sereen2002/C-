#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter a number : ";
    cin>>num;
    switch(num)
    {
        case 1:
        cout<<"You have entered ONE";
        break;
        case 2:
        cout<<"You have entered TWO";
        break;
        case 3:
        cout<<"You have entered THREE";
        break;
        default:
        cout<<"Number does not exist";
    }
    return 0;
}