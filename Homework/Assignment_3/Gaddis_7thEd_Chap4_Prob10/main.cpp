/* 
 * File:   Gaddis_7thEd_Chap4_Prob9
 * Author: Shannon Wong
 * Purpose: Software Sales
 * Created on July 7, 2014, 7:47 PM
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
    int pkg;         //user inputs amount of packages purchased 
    float value = 99;
    float price = value * pkg;
    
    float discount1 = price * 0.2; 
    float fprice1 = price - discount1;
    float discount2 = price * 0.3; 
    float fprice2 = price - discount2;
    float discount3 = price * 0.4; 
    float fprice3 = price - discount3;
    float discount4 = price * 0.5; 
    float fprice4 = price - discount4;
    
    
//Input Number of Units
    cout<<"Each package sells for $99 but certain discounts are given"
            "depending on how many units are purchased.\n";
    cout<<"Enter the amount of units purchased."<<endl;
    cin>>pkg;
    
//Compute Discount
    if (pkg>=10 || pkg<=19)
         {
        cout<<"Final Price Including Discount: $"<<fprice1<<endl;
         }
        
    else if (pkg>=20 || pkg<=49)
         {
   
        cout<<"Final Price Including Discount: $"<<fprice2<<endl;
         }

    else if (pkg>=50 || pkg<=99)
         {
      
        cout<<"Final Price Including Discount: $"<<fprice3<<endl;
         } 
    else if (pkg>=100)
         {  
      
        cout<<"Final Price Including Discount: $"<<fprice4<<endl;
         } 
    else 
         { 
        cout<<"Input Validation: Make sure the number of units is greater than 0."<<endl;
         } 
    

    return 0;
}

