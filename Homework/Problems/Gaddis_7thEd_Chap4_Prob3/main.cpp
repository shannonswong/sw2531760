/* 
 * File:   Gaddis_7thEd_Chap4_Prob3
 * Author: Shannon Wong
 * Purpose: Magic Dates
 * Created on July 6, 2014, 7:22 PM
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
    int month, day, year;
    
//Prompt User to Input Date
    cout<<"Is Your Date Magic? \n"<<endl;
    
    cout<<"Enter Month in Numeric From: (ex: 05 for May) "<<endl;
    cin>>month;
    cout<<"Enter Day: "<<endl;
    cin>>day;
    cout<<"Enter Year: (ex: 60 for 1960) "<<endl;
    cin>>year;
    
//Is the date magic? Output
    if (month*day == year)
        cout<<"CONGRATULATIONS, IT'S MAGIC!"<<endl; 
    else cout<<"not magic :( "<<endl;
    
//That's all, folks!
    
    return 0;
}

