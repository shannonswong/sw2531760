/* 
 * File:   Gaddis_7thEd_Chap3_Prob9
 * Author: Shannon Wong
 * Purpose: Number of Widgets 
 * Created on July 2, 2014, 5:28 PM
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
 * //Begin Execution 
 */

int main(int argc, char** argv) {
//Declare Variables     
    float weight, amount;

//Input Data      
    cout<<"Weight of Stacked Widgets: "; 
    cin>>weight; 

//Calculate
    amount = weight / 9.2;

//Output Data
    cout<<"Amount of Widgets: "<<amount<<endl;
    
    return 0;
}

