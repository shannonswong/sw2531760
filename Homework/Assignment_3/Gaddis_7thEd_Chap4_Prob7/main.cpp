/* 
 * File:   Gaddis_7thEd_Chap4_Prob7
 * Author: Shannon Wong
 * Purpose: Time Calculator
 * Created on July 6, 2014, 9:02 PM
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
    float seconds;
    
//Prompt User to Input Seconds
    cout<<"Enter an amount of seconds: "<<endl;
    cin>>seconds;
    
//Conversions 
    float days = seconds / 86400;
    float hours = seconds / 3600;
    float minutes = seconds / 60; 
    
//Output
    if (seconds >= 86400)
        cout<<days<<" days are in "<<seconds<<" seconds."<<endl; 
    
    else if (seconds >= 3600)
        cout<<hours<<" hours are in "<<seconds<<" seconds."<<endl;
    
    else if (seconds >= 60)
        cout<<minutes<<" minutes are in "<<seconds<<" seconds."<<endl;
    
    else 
        cout<<"INVALID AMOUNT. TRY AGAIN."<<endl;
    
    
  
   
   
    
    return 0;
}

