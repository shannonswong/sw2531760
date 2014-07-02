/* 
 * File:   Gaddis_7thEd_Chap3_Prob7
 * Author: Shannon Wong
 * Purpose: Average Rainfall
 * Created on July 1, 2014, 10:59 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */

int main(int argc, char** argv) {

//Declare Variables
    char month1, month2, month3; 
    float rain1, rain2, rain3; 
    
//Input Data
   cout<<"Month 1: "<<endl;
    cin>>month1;
    
    cout<<"Month 2: "<<endl;
    cin>>month2;
    
    cout<<"Month 3: "<<endl;
    cin>>month3;
    
    cout<<"Inches of Rainfall for "<<month1<<": "<<endl;
    cin>>rain1;
    
    cout<<"Inches of Rainfall for "<<month2<<": "<<endl;
    cin>>rain2;
    
    cout<<"Inches of Rainfall for "<<month3<<": "<<endl;
    cin>>rain3;
    
//Calculate 
    float sum = rain1 + rain2 + rain3;
    float avg = sum / 3; 

//Output Data
    cout<<"The average monthly rainfall of "<<month1<<", "<<month2<<", "<<
            ", and "<<month3<<" was "<<avg<<"inches."<<endl; 
    
    return 0;
}

