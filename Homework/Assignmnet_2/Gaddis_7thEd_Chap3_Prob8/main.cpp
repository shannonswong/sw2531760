/* 
 * File:   Gaddis_7thEd_Chap3_Prob8
 * Author: Shannon Wong
 * Purpose: Box Office 
 * Created on July 1, 2014, 10:41 PM
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
 * //hello
 */

int main(int argc, char** argv) {

//Declare Variables
    char title;
    char adult;
    char child; 
    float aprice = 6.00;
    float cprice = 3.00;
    
//Input Data
    cout<<"Movie Title: ";
    cin<<title; 
    
    cout<<"Adult Tickets Sold: ";
    cin>>adult;
    
    cout<<"Child Tickets Sold: ";
    cin>>child;
    
    cout<<" "<<endl; 
    
//Calculate 
    float atotal = adult * aprice;
    float ctotal = child *cprice;
    float gross = atotal + ctotal;
    float paid = gross * .2;
    float net = gross - paid;
    
//Output Data
    cout<<"Gross Box Office Profit: $"<<gross;
    
    cout<<" "<<endl;
    
    cout<<"Amount Paid to Distributor: -$"<<paid;
    
    cout<<" "<<endl;
    
    cout<<"Net Box Office Profit: $"<<net; 

    return 0;
}

