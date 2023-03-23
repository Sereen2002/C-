#include<iostream>
using namespace std;
int main()
{
    //declaring var "ch" and "num" with its datatypes "char" & "int" respec...
    char ch = 'A';
    int num = ch;
    //output statement where it prints the ASCII code for "A" i.e "65"
    cout<<"The ASCII code for "<<ch<<" is "<<num<<"\n";
    //cout statement for displaying the ASCII code for nxt alphabet after adding 1 to ch
    cout<<"Adding 1 to the character code\n";
    
    //adding 1 to ch and tht becomes a new variable with new ASCII code
    //ch + 1 ="B",num = 65 + 1 = "66" (new output)
    for(int i = ch; i<=89; i++)
    //equalising "i" to "ch",giving the limit i<=89 cuz 89+1=90(Z) 
    //to stop the loop after it reaches Z alphabet,i-increment
    {
    ch = ch+1;
    num = ch;

    //cout statement for nxt variable "B"
    cout<<"The ASCII code for "<<ch<<" is "<<num<<"\n";
    }
    return 0;
}
    /*char c='a';
    int count=c;
     cout<<"The ASCII code for "<<c<<" is "<<count<<"\n";
    for(int j = c; j<=123; j++)
    {
    c = c+1;
    count = ch;

    //cout statement for nxt variable "B"
    cout<<"The ASCII code for "<<c<<" is "<<count<<"\n";
    }*/
    

