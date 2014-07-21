/* 
 * File:   Project 1
 * Author: Shannon Wong
 * Game: Which Door?
 * Created on July 20, 2014, 11:59 AM
 */

//System Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

//Global Constants


//Function Prototypes
int roomA(); //room A
int getA(); //room A
void def(int); //default
int option1a(); //option 1 room A
int option2a(); //option 2 room A
int option3a(); //option 3 room A
int roomB(); //room B
int getB(); //room B
void def(int); 
int option1b(); //option 1 room B
int option2b(); //option 2 room B
int option3b(); //option 3 room B

//Execution Begins Here: 
int main() {
//Intro
    char enter;
    cout<<"Welcome to the game 'Which Door?'"<<endl;
    cout<<"Type anything to begin."<<endl;
    cin>>enter; 
    
int inA;
        roomA();
        inA=getA();
        switch(inA){
            case 1: option1a();break; //option 1 room A
            case 2: option2a();break; //option 2 room A
            case 3: option3a();break; //option 3 room A
            default:;
        };

int inB;
        roomB();
        inB=getB();
        switch(inB){
            case 1: option1b();break; //option 1 room B 
            case 2: option2b();break; //option 2 room B
            case 3: option3b();break; //option 3 room B
            default:;
        };
    return 0;
}

//Room A 
int roomA(){
    cout<<"You are suddenly put into room that is empty except for two doors"
            "along the same wall. \nThey both appear to be the same--mahogany "
            "with brass doorknobs. \nWhat do you do next?"<<endl;
    cout<<"[TYPE] 1: Go to the door on the left"<<endl;
    cout<<"[TYPE] 2: Go to the door on the right"<<endl;
    cout<<"[TYPE] 3: Give up."<<endl;
}

//Room A Choice
int getA(){
        int inA;
        cin>>inA;
        return inA;
}

int option1a(){
    int answer; 
    cout<<"You choose the door on the left."<<endl;
    cout<<"When you approach the door, a small screen suddenly descends from"
            "the ceiling."<<endl;
    cout<<"A message appears."<<endl;
    cout<<"Congratulations, you chose the correct door. Now please answer the "
            "question to proceed."<<endl;
    cout<<"What is 1+1?"<<endl;
    cin>>answer;
    if (answer == 2){
        cout<<"DING! Correct. Type anything to proceed."<<endl;
        char anything;
        cin>>anything; 
        anything = roomB(); 
    }
    else {
        char answer;
        cout<<"Incorrect."<<endl;
        cout<<"GAME OVER. Try again? (Y/N)"<<endl;
        cin>>answer;
        if (answer == 'Y' || answer == 'y'){
            answer = main(); 
        }
    }
    
}

int option2a(){
    cout<<"You choose the door on the right."<<endl;
    cout<<"Unfortunately, when you go to open the door, you fall into a large"
            "chute and end up where you started."<<endl;
    cout<<"GAME OVER. Try again? (Y/N)"<<endl;
    char answer;
    cin>>answer;
        if (answer == 'Y' || answer == 'y'){
            answer = main(); 
        }
}

int option3a(){
    cout<<"You give up."<<endl;
    char answer;
    cin>>answer;
        if (answer == 'Y' || answer == 'y'){
            answer = main(); 
        }
}



//Room B Menu 
int roomB(){
    cout<<"You proceed into the next room. The room looks the same except"
            "it has three doors. \nWhich do you choose?"<<endl;
    cout<<"[TYPE] 1: Left Door."<<endl; 
    cout<<"[TYPE] 2: Middle Door."<<endl;
    cout<<"[TYPE] 3: Right Door."<<endl;
    
}

//Room B Choice
int getB(){
        int inB;
        cin>>inB;
        return inB;
}

//Room B Option 1
int option1b(){
    cout<<endl; 
}

//Room B Option 2
int option2b(){
    cout<<endl; 
}

//Room B Option 3
int option3b(){
    cout<<endl; 
}

void def(int inA){
    cout<<"You typed "<<inA<<" to exit the game."<<endl;
}

