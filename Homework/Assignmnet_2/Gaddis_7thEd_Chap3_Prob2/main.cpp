/* 
 * File:   Gaddis_7thEd_Chap3_Prob2
 * Author: Shannon Wong
 * Purpose: Stadium Seating
 * Created on June 30, 2014, 8:30 PM
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
 * //Let the Execution Games...Begin! 
 */

int main(int argc, char** argv) {
    
//Declaring Variables
    double classA = 15.00; 
    double classB = 12.00; 
    double classC = 9.00; 
    int Asold, Bsold, Csold; 
    
//Input the Data
    cout<<"How many Class A tickets were sold? ";
    cin>>Asold; 
    
    cout<<"How many Class B tickets were sold? ";
    cin>>Bsold;
    
    cout<<"How many Class C tickets were sold? ";
    cin>>Csold; 
    
//Calculate the Data
    double Aincome = Asold * classA;
    double Bincome = Bsold * classB;
    double Cincome = Csold * classC;
    
    cout.setf(ios::fixed);
    cout.precision(2);
    double totincome = Aincome + Bincome + Cincome; 
   
//Output the Data
    cout<<"Total Income: $"<<totincome<<endl; 

    return 0;
}

