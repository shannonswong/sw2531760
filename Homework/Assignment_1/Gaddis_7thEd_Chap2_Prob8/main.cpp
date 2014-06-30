/* 
 * File:   Gaddis_7thEd_Chap2_Prob8
 * Author: Shannon Wong
 * Purpose: Land Calculation 
 * Created on June 29, 2014, 8:39 PM
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
 * //Here Begins Execution 
 */

int main(int argc, char** argv) {

//Declaring and Initiating Variables 
    int acreft = 43560;
    float acrem = 10.7639;
    
//Calculate 
    float quartacreft = acreft / 4;
    float quartacrem = quartacreft / acrem;
    
//Output
    cout<<"1/4 acre: "<<quartacreft<<" "<<"ft^2"<<endl;
    cout<<"1/4 acre: "<<quartacrem<<" "<<"m^2"<<endl; 
    
    return 0;
}

