#include<iostream>
using namespace std;
int main()
{
    int choice=0;
    cout<<"Select the option"<<endl<<"1-coffee"<<endl<<"2-tea"<<endl;
    cin>>choice;
    if(choice == 1)
    {
        cout<<"Your coffee is on the way. Thank You!";
    } 
    else if(choice == 2)
    {
        cout<<"Your tea is on the way. Thank You!";
    }
    else
    {
        cout<<"You have entered a wrong option  ";
    }
    return 0;
}