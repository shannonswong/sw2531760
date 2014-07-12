/* 
 * File:   Gaddis_7thEd_Chap3_Prob5
 * Author: Shannon Wong
 * Purpose: Batting Average
 * Created on June 30, 2014, 9:10 PM
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
    double times, hits;
    
//Input the Data
    cout<<"Times At Bat: ";
    cin>>times;
    
    cout<<"Number of Hits: ";
    cin>>hits;
    
//Calculate the Data
    cout.setf(ios::fixed);
    cout.precision(4);
    double average = hits / times;

//Output the Data
    cout<<"Batting Average: "<<average<<endl;

    return 0;
}

