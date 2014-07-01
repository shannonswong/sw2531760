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
    const int gallons;
    const int miles; 
    
//Input the Data
    cout<<"How many gallons of gas can your car hold?">>endl;
    cin>>gallons;
    
    cout<<"How many miles can you car travel on a full tank of gas?">>endl;
    cin>>miles;

//Output the Data
    int mpg = miles / gallons;
    cout<<"Your Car's MPG: "<<mpg<<endl;
    
    
    return 0;
}

