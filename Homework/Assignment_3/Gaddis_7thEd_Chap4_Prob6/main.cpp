/* 
 * File:   Gaddis_7thEd_Chap4_Prob6
 * Author: Shannon Wong
 * Purpose: Mass and Weight
 * Created on July 6, 2014, 8:05 PM
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
  int mass; 
  
//Prompt User to Input Mass between 10 and 1000
  cout<<"Input Mass In Kilograms: "<<endl;
  cin>>mass;
  
  int weight = mass * 9.8;
  
  if (mass <= 10)
      cout<<"MASS INVALID: Too Light";
  else if (mass >= 1000)
      cout<<"MASS INVALID: Too Heavy";
  else 
      cout<<"Weight in Newtons: "<<weight<<" N"<<endl; 
    
    return 0;
}

