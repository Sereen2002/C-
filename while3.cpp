#include<iostream>
using namespace std;
int main()
{
    int count = 1,sum = 0,val;
    //calculating the sum for value from users 
    cout<<"Enter the value till sum has to  be calculated : ";
    cin>>val;
    while(count<=val)
    {
        sum += count;
        count = count + 1;
    }
    //cout stmt is given outside the loop stmt to prevent repetition 
    cout<<"The sum of 1 to "<<val<<" = "<<sum<<endl;
    return 0;
}