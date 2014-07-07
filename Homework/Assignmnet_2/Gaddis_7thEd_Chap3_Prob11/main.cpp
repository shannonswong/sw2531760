/* 
 * File:   Gaddis_7thEd_Chap3_Prob11
 * Author: Shannon Wong
 * Purpose: Calories
 * Created on July 2, 2014, 5:34 PM
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
 * //Execution
 */

int main(int argc, char** argv) {
    
//Declare Variables
    float cookies, calories;

//Input Data
    cout<<"How many cookies did you eat? ";
    cin>>cookies;

//Calculate
    calories = cookies * 75;

//Output Data
    cout<<"Calories Consumed: "<<calories<<endl;
    
    return 0;
}

