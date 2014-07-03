/* 
 * File:   Example_Loan
 * Author: Shannon Wong
 * Purpose: calculate payment
 * Created on July 2, 2014, 8:06 PM
 */

#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

/* //User Defined Libraries
 * 
 * //Global Constants
 * 
 * //Function Prototypes 
 * 
 * //Execution Time
 */

int main(int argc, char** argv) {
//Declare Variables
    float loan, interestY, number;
    
//Input Data
    cout<<"Cost of Loan: $"; 
    cin>>loan;
    
    cout<<"Interest Rate Per Year In Decimal Form: "; //yearly interest rate
    cin>>interestY; 
    
    cout<<"Number of Monthly Payments: "; //N in equation
    cin>>number;
    
//Calculate
    float interestM = interestY / 12; //i in the equation, becomes monthly
    float blah = pow(1+interestM, number); //blah constitutes for (1+i)^N
    cout.setf(ios::fixed);
    cout.precision(2); 
    float payment = ((interestM*blah)/(blah - 1))*loan;
    float cost = (payment*number) - (loan); 

    
//Output Data
    cout<<"Payment: $"<<payment<<endl;
    cout<<"Cost: $"<<cost<<endl;
    

    return 0;
}

