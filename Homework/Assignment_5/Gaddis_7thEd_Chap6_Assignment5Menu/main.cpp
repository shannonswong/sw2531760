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
float stockProfit();
float hospital();
float nPopSize();
float numYears(); 
float popSize(); 

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
    cout<<"Type 6 for problem 10"<<endl;
    cout<<"Type 7 for problem 11"<<endl;
    cout<<"Type 8 for problem 14"<<endl;
    cout<<"Type 9 for problem 15"<<endl;
    cout<<"Type 10 for problem 10"<<endl;
    cout<<"Type 11 to exit."<<endl; 
}

//Choose problem number function
int getN(){
        int inN;
        cin>>inN;
        return inN;
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

void calculateRetail(float items, float perct){
//Problem 1 Retail Price Calculation
    cout<<"The retail price is $"<<( items + (items*perct/100))<<endl; 
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

float celsius(float i){
//Conversion for Problem 2: fahrenheit to celsius
    return (i-32)*(5.0/9.0); 
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

float fallingDistance(float time){
//Conversion Function for Problem 3
    float g = 9.8; //constant g 
    return 0.5*g*(time*time); //calculate and display distance
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

float kineticEnergy(float kg, float ms){ //ms means m/s 
//Problem 4: calculate kinetic energy
    cout<<"Kinetic Energy(J): "<<0.5*kg*ms*ms<<endl;
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

bool isPrime(int prime){
//Problem 9 determine if number is prime bool function 
for(int i=2;i<=prime/2;i++)
    if(prime%i==0)
       return 0;
return 1; 
}

void problem6(){
    //Declare Variables 
    float future, rate, years; 
    cout<<"How much do you need to put into your savings account?"<<endl;
    cout<<"Enter your desired 'future value.'"<<endl;
    cin>>future;
    cout<<"Enter the annual interest rate."<<endl;
    cin>>rate;
    cout<<"Enter the number of years you plan to have the money sit "
            "in the account."<<endl;
    cin>>years;
    presentValue(future, rate, years);
}

float presentValue(float future, float rate, float years){
//Problem 10 calculate present value function 
    float segment = 1.0 + rate;
    float present = future/pow(segment,years);
    cout<<"Present value: $"<<present<<endl; 
}

void problem7(){
//Problem 11: Stock Profit
    //Declare Variables
    float ns, pp, pc, sp, sc; 
    //ns=number of shares, pp=purchase price per share, pc=purchase commission,
    //sp=sale price per share, sc=sale commission
    cout<<"This program will help calculate the stock profit/loss."<<endl;
    cout<<"Enter the number of shares."<<endl;
    cin>>ns;
    cout<<"Enter the purchase price per share."<<endl;
    cin>>pp;
    cout<<"Enter the purchase commission paid."<<endl;
    cin>>pc;
    cout<<"Enter the sale price per share."<<endl;
    cin>>sp;
    cout<<"Enter the sale commission."<<endl;
    cin>>sc; 
    stockProfit(ns, pp, pc, sp, sc);   
}

float stockProfit(float ns, float pp, float pc, float sp, float sc){
//Problem 11 calculate stock profit and determine of profit or loss function
    float profit = ((ns*sp)-sc)-((ns*pp)-pc); 
    if (profit<0){
        cout<<"Your losses: "<<profit<<endl;
    }
    else cout<<"Your profits: "<<profit<<endl; 
}

void problem8(){
//Problem 14: Overloaded Hospital
    //Declare Variables
    char patient;
    //Menu for User
    cout<<"Is the patient an..."<<endl;
    cout<<"A) in-patient"<<endl;
    cout<<"or an"<<endl;
    cout<<"B) out-patient"<<endl;
    cin>>patient; 
    if (patient=='a' || patient=='A'){
        //Declare Variables
        float days, rate, service, meds; 
        cout<<"Enter the number of days spent in hospital."<<endl;
        cin>>days;
        cout<<"Enter the daily rate."<<endl;
        cin>>rate;
        cout<<"Enter the charges for hospital services."<<endl;
        cin>>service;
        cout<<"Enter hospital medication charges."<<endl;
        cin>>meds;
        hospital(days, rate, service, meds); 
    }
    else if (patient=='b' || patient=='B'){
        //Declare Variables
        float service, meds;
        cout<<"Enter the charges for hospital services."<<endl;
        cin>>service;
        cout<<"Enter hospital medication charges."<<endl;
        cin>>meds;
        hospital(service, meds);
    }
    else cout<<"Invalid Input."<<endl; 
}

float hospital(float d, float r, float s, float m){
//Problem 14 in-patient bill calculator 
    float daily = d*r; 
    float total = daily + s + m; 
    cout<<"Total: $"<<total<<endl;
}

float hospital(float service, float meds){
//Problem 14 out-patient bill calculator 
    float total = service + meds;
    cout<<"Total: $"<<total<<endl; 
}

void problem9(){
//Problem 15: Population 
    //Declare Variables
    float start, birth, death, years; 
    //Input
    cout<<"Enter the starting size of the population."<<endl;
    cin>>start;
    cout<<"Enter the birth rate."<<endl;
    cin>>birth;
    cout<<"Enter the death rate."<<endl;
    cin>>death;
    cout<<"Enter the years to display."<<endl;
    cin>>years; 
    nPopSize(start, birth, death, years); 
}

float nPopSize(float p, float b, float d, float y){
//Problem 15 new population size function 
    if (p<=2 || y<=1){
        cout<<"Invalid input. Start population must be greater than 2"
                "\nand years displayed must be greater than 1."<<endl;
    }
    else {
        float newpop = p*((1+b)*(1-d));
        float total = y*newpop;
        cout<<"New Population for "<<y<<" years:"<<total<<endl; 
    }
 }

void problem10(){
//Problem 16: Transient Population 
    //Declare Variables
    float start, birth, death, years, im, em; 
    //Input
    cout<<"Enter the starting size of the population."<<endl;
    cin>>start;
    cout<<"Enter the birth rate."<<endl;
    cin>>birth;
    cout<<"Enter the death rate."<<endl;
    cin>>death;
    cout<<"Enter the years to display."<<endl;
    cin>>years; 
    cout<<"Enter average yearly immigration."<<endl;
    cin>>im;
    cout<<"Enter average yearly emigration."<<endl;
    cin>>em; 
    numYears(start, birth, death, years, im, em); 
}

float numYears(float p2, float b2, float d2, float y2, float im, float em){
//Problem 16 new population calculation 
    if (p2<=2 || y2<=1){
        cout<<"Invalid input. Start population must be greater than 2"
                "\nand years displayed must be greater than 1."<<endl;
    }
    else {
        float newpop = p2*((1+b2)*(1-d2));
        float total = y2*newpop;
        float newtot = total + im - em;
        cout<<"Population: "<<newtot<<endl; 
    }
}

void def(int inN){
    cout<<"You have exited the menu."<<endl;
}