/* 
 * File:   main.cpp
 * Author: Shannon Wong
 * Purpose: menu for assignment 3
 * Created on July 7, 2014, 6:25 PM
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
    char choice;
    
//Menu
    cout<<endl;
    cout<<"Type 0 For Problem 1"<<endl;
    cout<<"Type 1 For Problem 3"<<endl;
    cout<<"Type 2 For Problem 4"<<endl;
    cout<<"Type 3 For Problem 5"<<endl;
    cout<<"Type 4 For Problem 6"<<endl;
    cout<<"Type 5 For Problem 7"<<endl;
    cout<<"Type 6 For Problem 11"<<endl;
    cout<<"Type 7 For Problem 12"<<endl;
    cout<<"Type 8 For Problem 13"<<endl;
    cout<<"Type 9 For Problem 14"<<endl;
    
//Input Choice
    cin>>choice;
    
    switch (choice)
    { 
        case '0':{
        //Problem 1: Maximum/Minimum
        //Declare Variables
                int num1, num2;
    
        //Prompt User to Input Two Integers 
                cout<<"Enter two integers. "<<endl; 
                cin>>num1>>num2;

        //Which is smaller and which is larger?
                if (num1 > num2)
                        cout<<num1<<" is larger than "<<num2<<"."<<endl;
                else if (num2 > num1)
                        cout<<num2<<" is larger and than "<<"."<<endl;

        break;  
        }
        
        case '1':{
            //Problem 3: Magic Dates
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
        break;  
        }
        
        case '2':{
            //Problem 4: Areas of Rectangles
            //Declare Variables: Lengths and Widths
                int l1, l2, w1, w2;

            //Prompt User to Input Lengths and Widths
                cout<<"Enter the LENGTH of the FIRST Rectangle: "<<endl;
            cin>>l1;
            cout<<"Enter the WIDTH of the FIRST Rectangle: "<<endl;
            cin>>w1;

            cout<<"Enter the LENGTH of the SECOND Rectangle: "<<endl;
            cin>>l2;
            cout<<"Enter the WIDTH of the SECOND Rectangle: "<<endl;
            cin>>w2;

            //Calculate Areas
            int area1 = l1 * w1;
            int area2 = l2 * w2;

            //Which Area is Greater? Output
            if (area1 > area2)
                cout<<"The FIRST Rectangle has a larger area.";
            else if (area1 < area2)
                cout<<"The SECOND Rectangle has a larger area.";
            else if (area1 == area2)
                cout<<"The areas of both rectangles are equal.";

        break;  
        }
        
        case '3':{
            //Problem 5: Book Club Points
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
        break;  
        }
        
        case '4':{
            //Problem 6: Mass and Weight
            //Declare Variables
                int mass; 

            //Prompt User to Input Mass between 10 and 1000
                cout<<"Input Mass In Kilograms: "<<endl;
                cin>>mass;

                int weight = mass * 9.8;

                 if (mass <= 10)
                        cout<<"MASS INVALID: Too Light";
                 else if (mass >= 1000)
                        cout<<"MASS INVALID: Too Heavy";
                 else 
                        cout<<"Weight in Newtons: "<<weight<<" N"<<endl; 
        break;  
        }
        
        case '5':{
            //Problem 7: Time Calculator
            //Declare Variables 
                float seconds;

            //Prompt User to Input Seconds
                cout<<"Enter an amount of seconds: "<<endl;
                cin>>seconds;

            //Conversions 
                float days = seconds / 86400;
                float hours = seconds / 3600;
                float minutes = seconds / 60; 

            //Output
                if (seconds >= 86400)
                    cout<<days<<" days are in "<<seconds<<" seconds."<<endl; 

                else if (seconds >= 3600)
                    cout<<hours<<" hours are in "<<seconds<<" seconds."<<endl;

                else if (seconds >= 60)
                    cout<<minutes<<" minutes are in "<<seconds<<" seconds."<<endl;

                else 
                    cout<<"INVALID AMOUNT. TRY AGAIN."<<endl;
        break;  
        }
        
        case '6':{
            //Declare  Variables
                    const float pi = 3.14159;
                    float radius, length, width, base, height;
                    int choice; 

            //Display Menu
                    cout<<"Geometry Calculator \n"<<endl; 
                    cout<<"1. Calculate the Area of a Circle.\n";
                    cout<<"2. Calculate the Area of a Rectangle.\n";
                    cout<<"3. Calculate the Area of a Triangle.\n";
                    cout<<"4. Quit.\n\n";
                    cout<<"Enter Your Choice."<<endl;
                    cin>>choice;

                    if (choice>= 1 && choice<=4)
                    { 
                            switch (choice)
                            {
                                    case 1: 
                                    cout<<"\n";
                                    cout<<"Enter The Radius of the Circle."<<endl;
                                    cin>>radius; 

                                    if (radius>=0)
                                    {
                                            float area1 = pi * radius * radius;
                                            cout<<"The area of the circle is: "<<area1<<endl;
                                    }
                                    else
                                    { 
                                            cout<<"The radius cannot be a negative value."<<endl;
                                    }
                                    break;

                            case 2:
                                    cout<<"\n"<<endl;
                                    cout<<"Enter the Length of the Rectangle:\n"<<endl;
                                    cin>>length;
                                    cout<<"Enter the Width of the Rectangle:\n"<<endl;
                                    cin>>width;

                                    if (length>0 && width>0)
                                    { 
                                            float area2 = length * width;
                                            cout<<"The area of the rectangle is: "<<area2<<endl;
                                    }
                                    else
                                    {
                                            cout<<"\n Cannot have negative values."<<endl;
                                    }
                                    break;

                            case 3:
                                    cout<<"\n"<<endl;
                                    cout<<"Enter the Base of the Triangle:\n"<<endl;
                                    cin>>base;
                                    cout<<"Enter the Height of the Triangle:\n"<<endl;
                                    cin>>height;

                                    if (base>0 && height>0)
                                    {
                                            float area3 = 0.5 * base * height;
                                            cout<<"The area of the triangle is: "<<area3<<endl;
                                    }
                                    else
                                    {
                                            cout<<"\n Cannot have negative values."<<endl;
                                    }
                                    break; 
                            }
                    }
                    else
                    {
                            cout<<"The valid choices are 1-4."<<endl;
                            cout<<"Run the program again and try another selection."<<endl;
                    }

        break;  
        }
        
        case '7':{
            cout<<"Solution to Problem 1"<<endl;
        break;  
        }
        
        case '8':{
            cout<<"Solution to Problem 1"<<endl;
        break;  
        }
        
        case '9':{
            cout<<"Solution to Problem 1"<<endl;
        break;  
        }
        
        default:{
            cout<<"Exiting Menu."<<endl;
        }  
        
    }
    
    
    
    
    return 0;
}

