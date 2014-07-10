/* 
 * File:   Gaddis_7thEd_Chap4_Prob5
 * Author: Shannon Wong
 * Purpose: Book Club Points
 * Created on July 6, 2014, 7:54 PM
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
    int books;

//Prompt User to Input Number of Books Purchased
    cout<<"How many books have you purchased this month?"<<endl;
    cin>>books;
    
//Books to Points Output
    if (books == 0)
        cout<<"Points Earned: 0";
    else if (books == 1)
        cout<<"Points Earned: 5";
    else if (books == 2)
        cout<<"Points Earned: 15";
    else if (books == 3)
        cout<<"Points Earned: 30";
    else if (books >= 4)
        cout<<"Points Earned: 60"; 

 //That's all, folks!
    
    return 0;
}

