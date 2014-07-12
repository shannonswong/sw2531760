/* 
 * File:   Assignment4_Gaddis_7thEd_Chap5
 * Author: Shannon Wong
 * Purpose: menu for assignment 4
 * Created on July 11, 2014, 9:20 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

/* //User Defined Libraries
 * 
 * //Global Constants
 * 
 * //Function Prototypes 
 * 
 * //Execution Begins!!!!
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
        cout<<"Type 3 for Gaddis Chapter 5 Problem 5"<<endl;
        cout<<"Type 4 for Gaddis Chapter 5 Problem 6"<<endl;
        cout<<"Type 5 for Gaddis Chapter 5 Problem 7"<<endl;
        cout<<"Type 6 for Gaddis Chapter 5 Problem 8"<<endl;
        cout<<"Type 7 for Gaddis Chapter 5 Problem 4"<<endl;
        cout<<"Type 8 for Gaddis Chapter 5 Problem 12"<<endl;
        cout<<"Type 9 for Gaddis Chapter 5 Problem 19"<<endl;
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
            //Problem 5: Speed Conversion Chart
            //Declare Variables
                float kph;
                float convrate = 0.621371; //conversion rate

                //Chart
                cout << "   KPH          MPH\n";
                cout << "-------------------------\n";

                //Produce Results 
                     for (kph = 60; kph <=130; kph +=5)
                        cout << kph <<"\t" << kph*convrate << endl;
                break;
            }case '4':{
            //Problem 6: Ocean Levels
            //Declare Variables
                float speed, distance;
                int time;

                do{
                    //Prompt User to Input Values
                    cout<<"Vehicle Speed"<<endl;
                    cin>>speed;
                    cout<<"Time Traveled"<<endl;
                    cin>>time;
                }while(speed<0||time<0);
                //Calculate 
                distance = time * speed;


                //Output
                cout<<fixed<<setprecision(2);
                //Chart
                        cout<<"hours \t\t distance traveled"<<endl;
                cout<<"-----------------------------------------------------"<<endl;

                for(int i=1; i<=time; i++){
                    cout<<i<<" \t\t "<<i*speed<<endl;
                     }
                break;
            }case '5':{
            //Problem 7: Pennies for Pay
            //Declare Variables
                float days, amount=0.01f;

                //Input Values
                do{
                    cout<<"Enter Number of Days. Maximum is 60"<<endl;
                    cin>>days;
                }while(days<0||days>60);

                //Chart
                cout<<"days\t\tpay amount"<<endl;
                cout<<"---------------------------------------------"<<endl;
                cout<<fixed<<setprecision(2);
                //Calculate and Output Data
                for(int i=1; i<=days; i++){
                    cout<<i<<"\t\t$"<<amount<<endl;
                    amount *= 2;
                    }
                break; 
            }case '6':{
            //Problem 8: Calories Burned
            //Declare Variables
                int floors, rooms=0, occupied=0;

                //Input Data
                do{
                    cout<<"How many floors?"<<endl;
                    cin>>floors;
                }while(floors<1);
                for(int i=1; i<=floors; i++){
                    int tempRoom, tempOcc;
                    do{
                        cout<<"Floor "<<i<<":  How many rooms? "<<endl;
                        cin>>tempRoom;
                    }while(tempRoom<10);
                    rooms += tempRoom;
                    do{
                        cout<<"Floor "<<i<<":  How many are occupied? "<<endl;
                        cin>>tempOcc;
                    }while(tempOcc>tempRoom);
                    occupied += tempOcc;
                }

                //Calculate
                float percent = occupied*100.0f/rooms;
                cout<<"total floors\ttotal rooms\toccupied\tpercentage coccupied"<<endl;
                cout<<floors<<"\t\t"<<rooms<<"\t\t"<<occupied<<"\t\t"<<percent<<"%"<<endl;
                break; 
            }case '7':{
            //Problem 4: Celsius to Fahrenheit Table 
            //Declare Variables
                float celsius, fahrenheit; 

            //Input Data
                cout<<"Enter Temperature in Celsius: ";
                cin>>celsius;

            //Output Data
                cout<<"Degrees In Celsius\t\t Degrees In Fahrenheit "<<endl;
                cout<<"____________________________________________________"<<endl;
                  for(int i=celsius; i<=celsius+20; i++){
                      fahrenheit = i * (9.0/5.0) + 32;
                      cout<<i<<"\t\t\t\t"<<fahrenheit<<endl;
                  }
                break; 
            }case '8':{
            //Problem 12: The Greatest and Least of These
            //Declare Variables
                int number,small, large, temp; 

                cout<<"Enter an Integer"<<endl;
                cin>>number;
                small =number;
                large = number;

                while(number!=-99){
                    cout<<"enter a number"<<endl;
                    cin>>number;
                    if (number!=-99){
                        if (number<small){
                            small = number;
                        }
                        else if (number>large){
                            large = number;
                        }        
                    }      
                }
                cout<<"Largest #  = "<<large<<"\tSallest number =  "<<small<<endl;
        
                break; 
            }case '9':{
            //Problem 19: Managing Budget
            //Declare values
                float budget, counter; //budget input. counter is expenses
                float total;
            //Input Budget
                cout<<"What is this month's total budget? "<<endl;
                cin>>budget;

                while (counter!=-9999)
                {
                    total+=counter;
                    cout<<"Enter Expense.  Press -9999 to Stop"<<endl;
                    cin>>counter;

                }
                if (total> budget){
                    cout<<"You have gone over budget.  Total amount is   "<<total<<endl;
                }
                else {
                    cout<<"Congratulations, you are under budget.  Total amount is  "<<total<<endl;
                }
                break;     
            }default:{
                cout<<"Exit Menu"<<endl<<endl;
            }
        };
    }while(choice>='0'&&choice<='9');

    return 0;
}

