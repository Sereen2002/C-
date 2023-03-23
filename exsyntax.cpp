#include<iostream>
using namespace std;
int main()
{
    //declaring the datatype of variable and result 
    int num1,num2;
    float result;
    
    //output statement and getting 1st input
    cout<<"enter 1st number:";
    cin>>num1;
    
    //output statement and getting 2nd input
    cout<<"enter 2nd number:";
    cin>>num2;
    
    //performing some arithmetic operations
    result=num1 + num2;
    cout<<" the sum of " << num1 << " and " << num2 << "is" << result << endl;
    result=num1 - num2;
    cout<<" the difference of " << num1 << " and " << num2 << "is" << result << endl;
    result=num1 * num2;
    cout<<" the product of " << num1 << " and " << num2 << "is"  << result << endl;
    result=(float)num1 / num2;
    cout<<" the remainder of " << num1 << " and " << num2 << "is" << result << endl;
    cout<<" the quotient of " << num1 << " divided by " << num2 << "is" << result << endl;

    //using "ifelse" statements

    if(num1 > num2)
    {
        cout<< num1 <<"is greater than"<< num2 << endl;
    }
    else if(num1 < num2)
    {
        cout<< num1 <<"is less than"<< num2 << endl;
    }
    else
    {
        cout<< num1 <<"is equal to "<< num2 << endl;
    }

    //using "for" loops

    for(int i = 1; i <= num1; i++)
    {
        cout << i << " ";    
    }
    cout << endl;
    return 0;
}