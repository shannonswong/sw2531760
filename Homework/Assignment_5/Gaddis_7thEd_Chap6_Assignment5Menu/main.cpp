/* 
 * File:   Gaddis_7thEd_Chap6_Functions
 * Author: Shannon Wong
 * the menu for Assignment 5
 * Created on July 23, 2014, 8:22 PM
 */
//System Libraries
#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;

//User Defined Libraries

//Global Constants

//Function Prototypes
void Menu();
int getN();
void def(int);
int problem1();
int problem2();
void problem3();
void problem4();
int problem5();
void problem6();
void problem7();
void problem8();
void problem9();
void problem10();
void calculateRetail(float);
float celsius(float);
float fallingDistance(float);
float kineticEnergy (float); 
bool isPrime(int); 
float presentValue(float);

//Execution Begins Here
int main(int argc, char** argv) {
int inN;
    do{
        Menu();
        inN=getN();
        switch(inN){
            case 1: problem1();break;
            case 2: problem2();break;
            case 3: problem3();break;
            case 4: problem4();break;
            case 5: problem5();break;
            case 6: problem6();break;
            case 7: problem7();break;
            case 8: problem8();break;
            case 9: problem9();break;
            case 10: problem10();break;
            default:;
        };
    }while(inN<11);
    return 0;
}

//Menu Function
void Menu(){
    cout<<"Type 1 for problem 1"<<endl;
    cout<<"Type 2 for problem 2"<<endl;
    cout<<"Type 3 for problem 3"<<endl;
    cout<<"Type 4 for problem 4"<<endl;
    cout<<"Type 5 for problem 9"<<endl;
    cout<<"Type 6 for problem 6"<<endl;
    cout<<"Type 7 for problem 7"<<endl;
    cout<<"Type 8 for problem 8"<<endl;
    cout<<"Type 9 for problem 9"<<endl;
    cout<<"Type 10 for problem 10"<<endl;
    cout<<"Type 11 to exit."<<endl; 
}

//Choose problem number function
int getN(){
        int inN;
        cin>>inN;
        return inN;
}

void calculateRetail(float items, float perct){
//Problem 1 Retail Price Calculation
    cout<<"The retail price is $"<<( items + (items*perct/100))<<endl; 
}

int problem1(){
//Problem 1: Markup
    //Declare Variables
    int cost; //cost of items wholesale
    float markup; //markup percent
    //User Inputs Data
    cout<<"Calculate the retail price of an item."<<endl; 
    cout<<"Enter wholesale cost of item."<<endl;
    cin>>cost;
    cout<<"Enter markup percentage of item."<<endl; 
    cin>>markup;
    calculateRetail(cost, markup); 
    return 0; 
}

float celsius(float i){
//Conversion for Problem 2: fahrenheit to celsius
    return (i-32)*(5.0/9.0); 
}

int problem2(){
//Problem 2: Celsius Temperature Table
    cout<<"Fahrenheit \t\tCelsius"<<endl; //display table
    //Loop
    for(int i=0;i<=20;i++){ //loop 0 to 20 
        cout<<i<<"\t\t"<<celsius(i)<<endl; //call conversion function
    }
    return 0; 
}

float fallingDistance(float time){
//Conversion Function for Problem 3
    float g = 9.8; //constant g 
    return 0.5*g*(time*time); //calculate and display distance
}

void problem3(){
//Problem 3: Falling Distance
    cout<<"Formula: d=1/2gt^2"<<endl;
    cout<<"Calculate Distance from Times 1 through 10."<<endl; //display table
    cout<<"Time(s): \t\tDistance(m):"<<endl; 
    for (int i=1; i<=10; i++){ //loop 1 to 10
        cout<<i<<"\t\t"<<fallingDistance(i)<<endl; //call formula function
    }
}

float kineticEnergy(float kg, float ms){ //ms means m/s 
//Problem 4: calculate kinetic energy
    cout<<"Kinetic Energy(J): "<<0.5*kg*ms*ms<<endl;
}

void problem4(){
//Problem 4: Kinetic Energy
    float mass, velocity; 
    cout<<"Formula: KE=1/2mv^2"<<endl;
    cout<<"Calculate the Object's Kinetic Energy."<<endl;
    cout<<"Enter the object's mass."<<endl;
    cin>>mass;
    cout<<"Enter the object's velocity."<<endl;
    cin>>velocity; 
    kineticEnergy(mass, velocity); 
}

bool isPrime(int prime){
for(int i=2;i<=prime/2;i++)
    if(prime%i==0)
       return 0;
return 1; 
}

int problem5(){
//Problem 9: isPrime Function
    //Declare Variables
    int prime;
    //Input Integer
    cout<<"Enter an integer to determine if it is prime.";
    cin>>prime;
   //Call isPrime Function and Display Result
    if (isPrime(prime)) {
       cout<<prime<<" is a prime number."<<endl;
    }
    else {
       cout<<prime<<" is not a prime number."<<endl;
    }
    return 0; 
}

float presentValue(float future, float rate, float years){
    float segment = 1.0 + rate;
    float present = future/pow(segment,years);
    cout<<"Present value: $"<<present<<endl; 
}

void problem6(){
    //Declare Variables 
    float future, rate, years; 
    cout<<"How much do you need to put into your savings account?"<<endl;
    cout<<"Enter your desired 'future value.'"<<endl;
    cin>>future;
    cout<<"Enter the annual interest rate."<<endl;
    cin>>rate;
    cout<<"Enter the number of years you plan to have the money sit"
            "in the account."<<endl;
    cin>>years;
    presentValue(future, rate, years);
}
void problem7(){
    
}
void problem8(){
    
}
void problem9(){
    
}
void problem10(){
    
}
void def(int inN){
    cout<<"You have exited the menu."<<endl;
}