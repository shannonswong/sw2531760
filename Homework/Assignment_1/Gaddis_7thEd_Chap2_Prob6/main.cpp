/* 
 * File:   Gaddis_7thEd_Chap2_Prob6
 * Author: Shannon Wong
 * Purpose: Miles Per Gallon 
 * Created on June 29, 2014, 7:41 PM
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
 * //Well, it's execution time
 */

int main(int argc, char** argv) {

//Declare and Initialize Variables
    int gallons = 16;
    int miles = 350;

//Calculate 
    int mpg = miles / gallons;
   
//Output
    cout<<"Miles Per Gallon: "<<mpg<<"mpg"<<endl;
    
    
    return 0;
}

