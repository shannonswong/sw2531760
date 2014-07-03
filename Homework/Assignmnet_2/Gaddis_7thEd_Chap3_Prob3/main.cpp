/* 
 * File:   Gaddis_7thEd_Chap3_Prob3
 * Author: Shannon Wong
 * Purpose: Housing Costs
 * Created on June 30, 2014, 8:48 PM
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
    double rent, phone, utility, cable;
    
//Input the Data
    cout<<"How much was your rent/mortgage this month? $";
    cin>>rent;
    
    cout<<"How much were your phone expenses this month? $"; 
    cin>>phone;
            
    cout<<"How much were your utility expenses this month? $";
    cin>>utility;
    
    cout<<"How much were your cable expenses this month? $";
    cin>>cable;
    
//Calculate the Data
    cout.setf(ios::fixed);
    cout.precision(2);
    double monthly = rent + phone + utility + cable; 
    double annual = 12 * monthly;
    
//Output the Data
    cout<<"Total Monthly Expenses: $"<<monthly<<endl;
    cout<<"Total Annual Expenses: $"<<annual<<endl; 

    return 0;
}

