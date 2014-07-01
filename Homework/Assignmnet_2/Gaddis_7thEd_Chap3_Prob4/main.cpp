/* 
 * File:   Gaddis_7thEd_Chap3_Prob4
 * Author: Shannon Wong
 * Purpose: How much insurance? 
 * Created on June 30, 2014, 9:03 PM
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
 * //I'm executin' with you to the end of the line
 */

int main(int argc, char** argv) {
    
//Declare Variables
    double cost; 
    
//Input the Data
    cout<<"Replacement cost of building: $";
    cin>>cost;
 
//Calculate the Data
    double insurance = cost * .8;
    
//Output the Data
    cout<<"Recommended Minimum Insurance to Purchase: $"<<insurance<<endl;

    return 0;
}

