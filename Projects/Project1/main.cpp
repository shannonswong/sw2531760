/* 
 * File:   Project 1
 * Author: Shannon Wong
 * Game: Choose a Door
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
void roomA(); //room A
int getA(); //room A
void def(int); //default
int option1a(); //option 1 room A
void option2a(); //option 2 room A
void option3a(); //option 3 room A
int roomB(); //room B
int getB(); //room B
int option1b(); //option 1 room B
void coinflip(); //coin flip for option 1 room B
void option2b(); //option 2 room B
void option3b(); //option 3 room B
void roomC(); //room C
int getC(); //room C
int option1c(); //option 1 room C
void option2c(); //option 2 room C
void option3c(); //option 3 room C

int theexit(); //exit the game

//Execution Begins Here: 
int main() {
//Intro
    char enter;
    cout<<"Welcome to the game: Choose a Door"<<endl;
    cout<<"Type anything to begin."<<endl;
    cin>>enter;
    
//Room A    
int inA;
        roomA();
        inA=getA();
        switch(inA){
            case 1: option1a();break; //option 1 room A
            case 2: option2a();break; //option 2 room A
            case 3: option3a();break; //option 3 room A
            default:;
        };

//Room B
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

//Room A Menu
void roomA(){
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

//Room A Option 1: The correct door with a simple question 
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
    else { //redirect
        char answer;
        cout<<"Incorrect."<<endl;
        cout<<"GAME OVER. Try again? (Y/N)"<<endl;
        cin>>answer;
        if (answer == 'Y' || answer == 'y'){
            answer = main(); 
        }
    }
    
}

//Room A Option 2: The incorrect door 
void option2a(){
    cout<<"You choose the door on the right."<<endl;
    cout<<"Unfortunately, when you go to open the door, you fall into a large"
            "chute and end up where you started."<<endl;
    cout<<"GAME OVER. Try again? (Y/N)"<<endl;
    char answer;
    cin>>answer;
        if (answer == 'Y' || answer == 'y'){ //redirect
            answer = main(); 
        }
}

//Room A Option 3: I'm not sure why this is here but hey
void option3a(){
    cout<<"You give up."<<endl;
    cout<<"GAME OVER. Do you want to try again? (Y/N)"<<endl; 
    char answer;
    cin>>answer;
        if (answer == 'Y' || answer == 'y'){
            answer = main(); 
        }
}

//Room B Menu 
int roomB(){
    cout<<"You proceed into the next room. \nThe room appears to be the same size"
            "but the walls have colorful polka dots. \nThere are three doors."<<endl;
    cout<<"A banner drops down from the ceiling."<<endl;
    cout<<"It says: 'It's time for a game.'"<<endl;
    cout<<"Which do you choose?"<<endl;
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
    cout<<"You chose the left door, again."<<endl;
    cout<<"A screen lowers from the ceiling."<<endl;
    cout<<"It says: 'Hello. This is a game of chance. \nIf the odds are in your"
            "favor, then you may proceed."<<endl;
    cout<<"You must flip more HEADs than TAILs out of 15 flips. Good luck."<<endl;
    //Coin Flip
    //Set the Random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Loop on function call, flip a coin 10 times
    for(int i=1;i<=15;i++){
        coinflip();
    }
    return 0;
}

//Simple heads or tails function
void coinflip(){
    
    //Determine if a flip of a coin is heads or tails
    bool heads=rand()%2;//Remainder 0,1
    
    //Output the result
    if(heads)cout<<"Heads flipped"<<endl;
    else cout<<"Tails flipped"<<endl;
}

//Room B Option 2
void option2b(){
    cout<<endl; 
}

//Room B Option 3
void option3b(){
    cout<<endl; 
}

void def(int inA){
    cout<<"You exited the game."<<endl;
}

int theexit(){
    cout<<"Goodbye"<<endl;
    return 0; 
}