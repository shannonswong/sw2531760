/* 
 * File:   Gaddis_7thEd_Chap2_Prob3
 * Author: Shannon Wong
 * Purpose: Sales Tax
 * Created on June 29, 2014, 6:40 PM
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
 * //It's Time for the Execution 
 */

int main(int argc, char** argv) {

//Declare and Initialize Variables
    
    int purchase = 52;
    float State = .04;
    float County = .02;
    float Total = State + County;
 
//Calculate Sales Tax   
       
    float STax = purchase * State;
    float CTax = purchase * County; 
    float ToTax = purchase * Total;
    float PurchPrice = purchase - ToTax; 
    
    
//Output the Results
    
    cout<<"Purchase Price: $"<<PurchPrice<<endl; 
    cout<<"State Tax: $"<<STax<<endl;
    cout<<"County Tax: $"<<CTax<<endl;
    cout<<"Total Tax: $"<<ToTax<<endl; 
        
    
    return 0;
}

