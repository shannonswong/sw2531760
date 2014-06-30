/* 
 * File:   Gaddis_7thEd_Chap2_Prob7
 * Author: Shannon Wong
 * Purpose: Distance per Tank of Gas
 * Created on June 29, 2014, 8:25 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/* //User Defined Libraries 
 * 
 * //Global Constants
 * 
 * //Function Prototype 
 * 
 * //Off With Her Head!
 */

int main(int argc, char** argv) {

//Declaring and Initiating Variables 
int gallons = 20;
float Tmpg = 21.5;
float Hmpg = 26.8; 

//Calculate
float Tdistance = gallons * Tmpg;
float Hdistance = gallons * Hmpg;

//Output
cout<<"Maximum Town Distance on 20 gal Gas: "<<Tdistance<<"  "<<"mi"<<endl;
cout<<"Maximum Highway Distance on 20 gal Gas: "<<Hdistance<<"  "<<"mi"<<endl;

    return 0;
}

