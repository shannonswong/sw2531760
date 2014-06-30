/* 
 * File:   Gaddis_7thEd_Chap2_Prob13
 * Author: Shannon Wong
 * Purpose: Pay Period Gross Pay
 * Created on June 29, 2014, 9:24 PM
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
 * //Para Empezar
 */

int main(int argc, char** argv) {
    
//Declaring and Initiating Variables
    int annual = 32500;
    int bimonth = 24;
    int biweek = 26;
    
//Calculate 
    int grossmonth = annual / bimonth;
    int grossweek = annual / biweek;

//Output
  cout<<"Gross Monthly Pay: $"<<grossmonth<<endl;
  cout<<"Gross Bi-Weekly Pay: $"<<grossweek<<endl; 
          
    return 0;
}

