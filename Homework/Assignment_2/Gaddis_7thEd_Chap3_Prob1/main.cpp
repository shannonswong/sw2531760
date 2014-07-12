/* 
 * File:   Gaddis_7thEd_Chap3_Prob1
 * Author: Shannon Wong
 * Purpose: Miles Per Gallon
 * Created on June 30, 2014, 8:05 PM
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
    float gallons, miles, mpg; 
    
//Input the Data
    cout<<"How many gallons of gas can your car hold? ";
    cin>>gallons;
    
    cout<<"How many miles can you car travel on a full tank of gas? ";
    cin>>miles;

//Output the Data
    mpg = miles / gallons;
    cout<<"Your Car's MPG: "<<mpg<<endl;
    
    
    return 0;
}

