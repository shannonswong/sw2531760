/* 
 * File:   Gaddis_7thEd_Chap2_Prob9
 * Author: Shannon Wong
 * Purpose: Circuit Board Price 
 * Created on June 29, 2014, 9:03 PM
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
 * //Let's Get It Started
 */

int main(int argc, char** argv) {

//Declare and Initiate Variables
    float cost = 12.67;
    float profit = 1.40;

//Calculate
    float price = cost * profit; 
    
//Output
    cout<<"Price: $"<<price<<endl; 

    return 0;
}

