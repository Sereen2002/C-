#include<iostream>
using namespace std;
int main()
{
    int count = 1,sum = 0; /*initialising dataype of var and initial values for count & sum.
    To get correct output and to avoid any previously stored unwanted data in the value of sum,
    we assign value "0" to sum to ensure that sum has no other data*/ 
    while(count<=99) //while condition to count from 1 to 99
    {
        sum += count; //sum+=count is equivalent to sum = sum + count
        count = count+1; //count value will be incremented by 1 till 99
    }
    //gives us the output of total sum (1 to 99)  after gng through the while loop 
    cout<<"The sum of number from 1 to 99 is : "<<sum<<endl;
    return 0;                                                                   

}