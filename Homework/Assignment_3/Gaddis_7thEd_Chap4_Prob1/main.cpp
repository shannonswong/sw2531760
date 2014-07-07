/* 
 * File:   Gaddis_7thEd_Chap4_Prob1
 * Author: Shannon Wong
 * Purpose: Minimum/Maximum
 * Created on July 6, 2014, 5:44 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/* //User Defined Libraries
 * 
 * //Global Constants
 * 
 * //Function Prototypes
 * 
 * //Execution
 */

int main(int argc, char** argv) {
    
//Declare Variables
    int num1, num2;
    
//Prompt User to Input Two Integers 
    cout<<"Enter two integers. "<<endl; 
    cin>>num1>>num2;

//Which is smaller and which is larger?
    if (num1 > num2)
        cout<<num1<<" is larger than "<<num2<<"."<<endl;
    else if (num2 > num1)
        cout<<num2<<" is larger and than "<<"."<<endl;

//That's all, folks!
    
    return 0;
}

