#include<iostream>
using namespace std;
int main()
{
    int sum = 0,val;
    cout<<"Enter the value till the sum has to be calculated : ";
    cin>>val;
    for(int i=1;i<=val;i++)
    {
        sum+=i; // sum += i ==> sum = sum + i
    }
    cout<<"The sum of numbers from 1 to "<<val<<" = "<<sum<<endl;
    return 0;
}