/* 
 * File:   Gaddis_7thEd_Chap4_Prob2
 * Author: Shannon Wong
 * Purpose: Roman Numeral Converter 
 * Created on July 6, 2014, 6:24 PM
 */

#include <iostream>
#include <string.h>
#include <iomanip>

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
    const int NSIZE=2;
    char number[NSIZE];
    int rn; 
    
//Prompt User to Input Number 1 to 10
    cout<<"Enter an integer from 1 to 10: "<<endl;
    cin>>number;
   
//Possible Acquired Input 
    if(!strcmp(number,"1"))  rn=1;
    if(!strcmp(number,"2"))  rn=2;
    if(!strcmp(number,"3"))  rn=3;
    if(!strcmp(number,"4"))  rn=4;
    if(!strcmp(number,"5"))  rn=5;
    if(!strcmp(number,"6"))  rn=6;
    if(!strcmp(number,"7"))  rn=7;
    if(!strcmp(number,"8"))  rn=8;
    if(!strcmp(number,"9"))  rn=9;
    if(!strcmp(number,"10")) rn=10;
   
 //Output Roman Numeral 
    switch (rn)
    { 
        case '1':cout<<"Roman Numeral: I"<<endl;
        break;
        case '2':cout<<"Roman Numeral: II"<<endl;
        break;
        case '3':cout<<"Roman Numeral: III"<<endl;
        break;
        case '4':cout<<"Roman Numeral: IV"<<endl;
        break;
        case '5':cout<<"Roman Numeral: V"<<endl;
        break;
        case '6':cout<<"Roman Numeral: VI"<<endl;
        break;
        case '7':cout<<"Roma Numeral: VII"<<endl;
        break;
        case '8':cout<<"Roman Numeral: VIII"<<endl;
        break;
        case '9':cout<<"Roman Numeral: IX"<<endl;
        break;
        case '10':cout<<"Roman Numeral: X"<<endl;
        break; 
        
        deault:cout<<"Invalid Integer."<<endl;
        
    }
    return 0;
}

