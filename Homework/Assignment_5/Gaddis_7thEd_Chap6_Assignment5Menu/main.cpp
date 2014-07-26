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
void problem5();
void problem6();
void problem7();
void problem8();
void problem9();
void problem10();
void calculateRetail(float);
float celsius(float);
float fallingDistance(float);

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
    cout<<"Type 5 for problem 5"<<endl;
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
    return (i-32)*(5.0/9.0); 
}

int problem2(){
//Problem 2: Celsius Temperature Table
    cout<<"Fahrenheit \t\tCelsius"<<endl;
    //Loop
    for(int i=0;i<=20;i++){ 
        cout<<i<<"\t\t"<<celsius(i)<<endl;
    }
    return 0; 
}

float fallingDistance(float time){
    float g = 9.8; 
    return 0.5*g*(time*time);
    
}

void problem3(){
    cout<<"Formula: d=1/2gt^2"<<endl;
    cout<<"Calculate Distance from Times 1 through 10."<<endl; 
    cout<<"Time(s): \t\tDistance(m):"<<endl; 
    for (int i=1; i<=10; i++){
        cout<<i<<"\t\t"<<fallingDistance(i)<<endl;
    }
}
void problem4(){
    
}
void problem5(){
    
}
void problem6(){
    
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
    
}