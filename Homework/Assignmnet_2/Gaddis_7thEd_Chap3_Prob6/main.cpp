/* 
 * File:   Gaddis_7thEd_Chap3_Prob6
 * Author: Shannon Wong
 * Purpose: Test Average
 * Created on June 30, 2014, 9:23 PM
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
 * // (Patrick Stewart voice) Engage
 */

int main(int argc, char** argv) {

//Declare Variables
    double t1, t2, t3, t4, t5; //each of the 5 test scores that will be entered
    
//Input the Data
    cout<<"Test Score 1: ";
    cin>>t1;
    
    cout<<"Test Score 2: ";
    cin>>t2;
    
    cout<<"Test Score 3: ";
    cin>>t3;
    
    cout<<"Test Score 4: ";
    cin>>t4;
    
    cout<<"Test Score 5: ";
    cin>>t5; 
    
//Calculate the Data
    cout.setf(ios::fixed);
    cout.precision(1);
    double sum = t1 + t2 + t3 + t4 + t5;
    double average = sum / 5;
    
//Output the Data
    cout<<"Test Average: "<<average<<endl;

//That's All, Folks!
    
    return 0;
}

