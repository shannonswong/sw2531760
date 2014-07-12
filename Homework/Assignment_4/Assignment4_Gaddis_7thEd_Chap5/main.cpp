/* 
 * File:   Assignment4_Gaddis_7thEd_Chap5
 * Author: Shannon Wong
 * Purpose: menu for assignment 4
 * Created on July 11, 2014, 9:20 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/* //User Defined Libraries
 * 
 * //Global Constants
 * 
 * //Function Prototypes 
 */

int main(int argc, char** argv) {
//Declare Variables
    char choice;
    
//Loop until choice is not in the menu selection
    do{
        //Output the menu and input the choice
        cout<<"Type 0 for Gaddis Chapter 5 Problem 1"<<endl;
        cout<<"Type 1 for Gaddis Chapter 5 Problem 2"<<endl;
        cout<<"Type 2 for Gaddis Chapter 5 Problem 3"<<endl;
        cout<<"Type 3 for Gaddis Chapter 5 Problem 4"<<endl;
        cout<<"Type 4 for Gaddis Chapter 5 Problem 5"<<endl;
        cout<<"Type 5 for Gaddis Chapter 5 Problem 6"<<endl;
        cout<<"Type 6 for Gaddis Chapter 5 Problem 7"<<endl;
        cout<<"Type 7 for Gaddis Chapter 5 Problem 8"<<endl;
        cout<<"Type 8 for Gaddis Chapter 5 Problem 9"<<endl;
        cout<<"Type 9 for Gaddis Chapter 5 Problem 10"<<endl;
        cin>>choice;
    
    
        cout<<endl;
        switch(choice){
            case  '0':{
            //Problem 1: ASCII Characters
            for (int i=0, j=1; i<=127; i++,j++) 
                {
                    int x = i;  //numbers representing characters 
                    char y = (char) x; //characters corresponding to numbers
                    cout << y; 

                    if (j == 16) {  //16 per line 
                        j = 0;
                        cout << '\n';
                        cout<<endl;            
                    }
                }
                break;
            }case '1':{
            //Problem 2: Sum of Numbers
            //Declare Variables
                int integer; //user will enter positive integer
                int start = 1; //integers begin at 1 

            //Input Data
                cout<<"Enter a positive integer up to 100"<<endl; 
                cin>>integer; 

            //Produce Sum of All Integers Up to Input Integer
                int result = 0; //sum begins at zero
                for (int i=start; i <= integer; i++) 
                {
                    result +=i;       //continue to add integers up to input integer
                                      //then produce result 
                }
                cout<<result; 
                break;
            }case '2':{
            //Problem 3: Distance Traveled
            //Declare Variables
                int speed, time;

            //Input Data
                cout<<"Enter the speed of the vehicle in MPH."<<endl;
                cin>>speed;
                cout<<"Enter the time in hours the vehicle traveled."<<endl;
                cin>>time;

            //Chart Setup
                cout<<"Hours    Distance \n"
                    <<"-------------------"<<endl; 

            //Calculations
                for (int i=1; i<=time; i++) {
                    cout<<i<<"\t"<<speed*i<<endl;
                }  
                break;         
            }case '3':{
                cout<<"Problem B here!"<<endl<<endl;
                break;
            }case '4':{
                cout<<endl;
                break;
            }case '5':{
                cout<<endl;
                break; 
            }case '6':{
                cout<<endl;
                break; 
            }case '7':{
                cout<<endl;
                break; 
            }case '8':{
                cout<<endl;
                break; 
            }case '9':{
                cout<<endl;
                break;     
            }default:{
                cout<<"Exit Menu"<<endl<<endl;
            }
        };
    }while(choice>='0'&&choice<='9');

    return 0;
}

