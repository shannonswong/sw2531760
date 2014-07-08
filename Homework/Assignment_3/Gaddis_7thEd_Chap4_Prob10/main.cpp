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
    
//Input Number of Units
    cout<<"Each package sells for $99 but certain discounts are given"
            "depending on how many units are purchased."
    cout<<"Enter the amount of units purchased."<<endl;
    cin>>pkg;
    
//Compute Discount
    if (pkg>=10 || pkg<=19)
        { 
        float price = value * pkg;
        float discount = price * 0.2;
        float fprice = price - discount;
        cout<<"Final Price Including Discount: $"<<fprice<<endl;
        }
    else if (pkg>=20 || pkg<=49)
        { 
        float price = value * pkg;
        float discount = price * 0.3;
        float fprice = price - discount;
        cout<<"Final Price Including Discount: $"<<fprice<<endl;
        }
    else if (pkg>=50 || pkg<=99)
        { 
        float price = value * pkg;
        float discount = price * 0.4;
        float fprice = price - discount;
        cout<<"Final Price Including Discount: $"<<fprice<<endl;
        }
    else if (pkg>=100)
         {
        float price = value * pkg;
        float discount = price *.5;
        float fprice = price - discount;
        cout<<"Final Price Including Discount: $"<<fprice<<endl; 
        }
    else 
        {
        cout"Input Validation: Make sure the number of units is greater"
                "than 0."<<endl; 
        }
    

    return 0;
}

