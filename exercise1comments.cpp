#include<iostream>
using namespace std;
int main()
{
    //exercise 1 - "/*" (givng a open delimiter within quotes)
    cout << "/*" ;
    //exercise 2 -  "*/" (givng a end delimiter within quotes)
    cout << "*/"; 
    //exercise 3 - /*   "*/"   */ 
    //this as output gives us an error,
    //as it considers ********* /*   "*/ ********* this as comment line as it 
    //is given inside a multiline delimiter and ******* "*/ ******** shows us error in this part
    //so to clear this error we can give a open delimiter but 
    //as both the output becomes comment line it again raises error.
    //to get the ouput we should close the delimiter with an " in the end */
    cout <</*   "*/ "   */";
    //exercise 4- /* " */ " /* " /* " */;
    //in this exercise 1st and last are considered as comments and ignored,
    //middle statement within the quotes are given as output
    cout<</* " */ "/*" /* " */;
    return 0;
}