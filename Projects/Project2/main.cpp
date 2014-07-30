/* 
 * File:   Project 2
 * Author: Shannon Wong
 * 
 * Created on July 26, 2014, 2:39 PM
 */
//System Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <ctime>
#include <cmath>
using namespace std;

//Global Constants


//Function Prototypes
int sceneA(); //scene A
int getA(); //scene A
void def(int); //default
int choice1a(); //choice 1 scene A
int choice2a(); //choice 2 scene A
int choice3a(); //choice 3  A
int youwin(); //the end
int gameover(); //game over

//Execution Begins Here: 
int main() {
//Intro
    char enter;
    cout<<"Welcome to the Tiny Adventure. \nYou will be navigating through"
            "perilous obstacles to reach your ultimate goal."
            "\nAre you up for the challenge?"<<endl;
    cout<<"If so, type anything to continue."
    cin>>enter;
    
     //Set the random seed for later
    srand(static_cast<unsigned int>(time(0)));
    
//scene A    
int inA;
        sceneA();
        inA=getA();
        switch(inA){
            case 1: choice1a();break; //choice 1 scene A
            case 2: choice2a();break; //choice 2 scene A
            case 3: choice3a();break; //choice 3 scene A
            default:;
        };
//scene B
int inB;
        sceneB();
        inB=getB();
        switch(inB){
            case 1: choice1b();break; //choice 1 scene B 
            case 2: choice2b();break; //choice 2 scene B
            case 3: choice3b();break; //choice 3 scene B
            default:;
        };
//scene C
int inC;
        sceneC();
        inC=getC();
        switch(inC){
            case 1: choice1c();break; //choice 1 scene C 
            case 2: choice2c();break; //choice 2 scene C
            case 3: choice3c();break; //choice 3 scene C
            default:;
        };
//scene D
int inD;
        sceneD();
        inD=getD();
        switch(inD){
            case 1: choice1d();break; //choice 1 scene D
            case 2: choice2d();break; //choice 2 scene D
            case 3: choice3d();break; //choice 3 scene D
            default:;
        };
//scene E
int inE;
        sceneE();
        inE=getE();
        switch(inE){
            case 1: choice1e();break; //choice 1 scene E
            case 2: choice2e();break; //choice 2 scene E
            case 3: choice3e();break; //choice 3 scene E
            default:;
        };
    return 0;
}

//scene A story
int sceneA(){
    cout<<"------------------------------------"<<endl;
    cout<<"You suddenly awake and realize that you are in a"
            " mysteriously unfamiliar room."<<endl;
    cout<<"The room is dimly lit by a stub of a flickering candle that rests "
            "upon the only piece of furniture in the room--a small,"
            " wooden desk."<<endl;
    cout<<"Well, there is also the uncomfortably stiff bed you happen"
            "to be laying on, but that's it."<<endl;
    cout<<"You have decisions to make, now. Which do you choose?"<<endl;
    cout<<"--------------CHOICES--------------"<<endl;
    cout<<"[TYPE] 1: Go to the desk"<<endl;
    cout<<"[TYPE] 2: Investigate your bed."<<endl;
    cout<<"[TYPE] 3: Go back to sleep."<<endl;
}

//scene A Choice
int getA(){
        int inA;
        cin>>inA;
        return inA;
}

//scene A choice 1: The correct door with a simple question 
int choice1a(){
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
        anything = sceneB(); 
    }
    else { //redirect
        char answer2;
        cout<<"Incorrect."<<endl;
        cout<<"Type anything"<<endl;
        cin>>answer2;
        answer2 = gameover();
        }
}

//scene A choice 2: The incorrect door 
int choice2a(){
    cout<<"You choose the door on the right."<<endl;
    cout<<"Unfortunately, when you go to open the door, you fall into a large"
            "chute and end up where you started."<<endl;
    cout<<"Type anything."<<endl;
    char answer;
    cin>>answer;
    answer = gameover(); 
}

//scene A choice 3: I'm not sure why this is here but hey
int choice3a(){
    cout<<"You give up."<<endl;
    cout<<"Type anything."<<endl; 
    char answer;
    cin>>answer;
    answer = gameover(); 
}

//scene B Menu 
int sceneB(){
    cout<<"ROOM B"<<endl;
    cout<<"You proceed into the next scene. \nThe scene appears to be the same size"
            "but the walls have colorful polka dots. \nThere are three doors."<<endl;
    cout<<"A banner drops down from the ceiling."<<endl;
    cout<<"It says: 'It's time for a game.'"<<endl;
    cout<<"Which do you choose?"<<endl;
    cout<<"[TYPE] 1: Left Door."<<endl; 
    cout<<"[TYPE] 2: Middle Door."<<endl;
    cout<<"[TYPE] 3: Right Door."<<endl; 
}

//scene B Choice
int getB(){
        int inB;
        cin>>inB;
        return inB;
}

//scene B choice 1: Incorrect
int choice1b(){ //left door incorrect
	cout<<"You chose the left door."<<endl;
	cout<<"You approach the door and unfortunately, you have chosen incorrectly."<<endl;
	cout<<"You fall down a large chute and you are back where you started."<<endl;
	char anything;
	cout<<"Type anything to continue."<<endl;
	cin>>anything; 
	anything = gameover(); 
}

//scene B choice 2: Correct
int choice2b(){
	cout<<"You chose the middle door."<<endl;
	cout<<"Looks like you're correct. A screen lowers from the ceiling."<<endl;
	cout<<"It says: 'It's time for a simple game.'"<<endl;
	cout<<"A dice-rolling contraption comes out of the door."<<endl;
	cout<<"'If you an even number within 10 games, you may proceed. It's a"
			"terribly simple game of chance."<<endl;
	cout<<"'Go ahead and roll the dice."<<endl;
	char roll;
	cin>>roll;
	roll = dicegame();
}	
//scene B choice 2: Game
int dicegame(){ 
//Declare variables
	int wins=0, loss=0; 
	for(int game=1;game<=10;game++){
        //Roll dice
        char die1=rand()%6+1;
        char die2=rand()%6+1;
        char sum1=die1+die2;
        switch(sum1){
            case 2:case 4:case 6: case 8: case 10: case 12:{
                wins++;break;
            }default:{
               loss++;break;
            }
        }
    }
    //Output the results
    cout<<"Number of Games won = "<<wins<<endl;
    cout<<"Number of Games lost = "<<loss<<endl;
    //Outcome
    if (wins>loss){
    	cout<<"Congratulations. You may proceed."<<endl;
    	cout<<"Type anything to proceed."<<endl;
    	char anything;
    	cin>>anything; 
    	anything = sceneC(); 
    }
    else if (loss>wins){ 
        cout<<"Sorry. You did not win."<<endl;
        cout<<"You must return to the previous scene."<<endl;
    	cout<<"Type anything to proceed."<<endl;
    	char anything2;
    	cin>>anything2;
    	anything2 = sceneA();
    }
    
}
 
//scene B choice 3: Incorrect
int choice3b(){
    cout<<"You choose the door on the right."<<endl;
    cout<<"Type anything."<<endl;
    char anything;
    cin>>anything;
    anything = gameover(); 
}

//scene C 
int sceneC(){
    cout<<"ROOM C"<<endl;
    cout<<"You proceed to the next scene. \nYou see three doors, again."<<endl;
    cout<<"Which do you choose?"<<endl;
    cout<<"[TYPE] 1: Left Door."<<endl; 
    cout<<"[TYPE] 2: Middle Door."<<endl;
    cout<<"[TYPE] 3: Right Door."<<endl; 
}

//scene C Choice
int getC(){
    int inC;
    cin>>inC;
    return inC;
}

//scene C choice 1: Incorrect
int choice1c(){
    cout<<"You chose the left door."<<endl;
    cout<<"You approach the door and unfortunately, you have chosen incorrectly."<<endl;
    cout<<"You fall down a large chute and you are back where you started."<<endl;
    char anything;
    cout<<"Type anything to continue."<<endl;
    cin>>anything; 
    anything = gameover();     
}

//scene C choice 2: Incorrect
int choice2c(){
    cout<<"You chose the middle door."<<endl;
    cout<<"You approach the door and unfortunately, you have chosen incorrectly."<<endl;
    cout<<"You fall down a large chute and you are back where you started."<<endl;
    char anything;
    cout<<"Type anything to continue."<<endl;
    cin>>anything; 
    anything = gameover(); 
}

//scene C choice 3: Correct
int choice3c(){
    //Declare Variables
    char response; //MC response
    char anything, anything2; //to proceed
    //Text
    cout<<"You chose the last, right-hand door."<<endl;
    cout<<"You chose correctly, again."<<endl;
    cout<<"The screen says: 'Answer the following SAT Sentence"
            "Completion question.'"<<endl;
    cout<<"Because King Philip's desire to make Spain the dominant power in\n"
            " sixteenth-century Europe ran counter to Queen Elizabeth's\n"
            " insistence on autonomy for England ---- was ---."<<endl;
    cout<<"A) reconciliation..assured"<<endl;
    cout<<"B) warfare..avoidable"<<endl;
    cout<<"C) ruination..impossible"<<endl;
    cout<<"D) conflict..inevitable"<<endl; //correct
    cout<<"E) diplomacy..simple"<<endl;
    cout<<"Please enter a letter. Just one letter."<<endl;
    cin>>response;
    if (response == 'd' || response == 'D'){
        cout<<"Correct. Type anything to proceed."<<endl;
        cin>>anything;
        anything = sceneD(); 
    }
    else{ 
        cout<<"Incorrect. Sorry. Type anything to go back to the previous scene."<<endl;
        cin>>anything2; 
        anything2 = sceneB(); 
    }    
} 

//scene D
int sceneD(){
    cout<<"ROOM D"<<endl;
    cout<<"Wow, you've made it pretty far."<<endl;
    cout<<"Which do door do choose, now?"<<endl;
    cout<<"[TYPE] 1: Left Door."<<endl; 
    cout<<"[TYPE] 2: Middle Door."<<endl;
    cout<<"[TYPE] 3: Right Door."<<endl;
}

//scene D choice
int getD(){
    int inD;
    cin>>inD;
    return inD;
}

//scene D choice 1: Incorrect
int choice1d(){
    cout<<"You chose the left door."<<endl;
    cout<<"You approach the door and unfortunately, you have chosen incorrectly."<<endl;
    cout<<"You fall down a large chute and you are back where you started."<<endl;
    char anything;
    cout<<"Type anything to continue."<<endl;
    cin>>anything; 
    anything = gameover();     
}

//scene D choice 2: Incorrect
int choice2d(){
    cout<<"You chose the middle door."<<endl;
    cout<<"You approach the door and unfortunately, you have chosen incorrectly."<<endl;
    cout<<"You fall down a large chute and you are back where you started."<<endl;
    char anything;
    cout<<"Type anything to continue."<<endl;
    cin>>anything; 
    anything = gameover(); 
}

//scene D choice 3: Correct
int choice3d(){
    //Declare Variables
    unsigned short response; 
    char anything, anything2; 
    cout<<"You chose the door on the right."<<endl;
    cout<<"Turns out, you're correct. Yet again, a screen lowers."<<endl;
    cout<<"It says: 'Solve the simple math problem.'"<<endl;
    cout<<"Divide: 14256 / 2."<<endl;
    unsigned short answer = 14256 / 2;
    if (response == answer){
        cout<<"Correct. Proceed."<<endl;
        cin>>anything;
        anything = sceneE(); 
    }
    else {
        cout<<"Incorrect. Go back."<<endl;
        cin>>anything2;
        anything2 = sceneC(); 
    }
}

//scene E
int sceneE(){
    cout<<"ROOM E"<<endl;
    cout<<"Well, which do door do choose, now?"<<endl;
    cout<<"[TYPE] 1: Left Door."<<endl; 
    cout<<"[TYPE] 2: Middle Door."<<endl;
    cout<<"[TYPE] 3: Right Door."<<endl;
}

//scene E choice
int getE(){
    int inE;
    cin>>inE;
    return inE;
}

//scene E choice 1: Incorrect
int choice1e(){
    cout<<"You chose the left door."<<endl;
    cout<<"You approach the door and unfortunately, you have chosen incorrectly."<<endl;
    cout<<"You fall down a large chute and you are back where you started."<<endl;
    char anything;
    cout<<"Type anything to continue."<<endl;
    cin>>anything; 
    anything = gameover();     
}

//scene E choice 2: Correct
int choice2e(){
    float response;
    float degF = 9*23.0/5.0+32.0;
    cout<<"Correct door."<<endl;
    cout<<"The screen says: 'So, do you know how to convert 23 degrees"
            "Celsius to degrees Fahrenheit? Then please do so now."<<endl;
    cin>>response; 
    cout<<"Answer: "<<degF<<endl;
    if (response == degF){
        cout<<"Correct. Proceed"<<endl;
        youwin();
    }
    else {
        cout<<"Incorrect. Start from previous scene."<<endl;
        sceneD(); 
    }
}

//scene E choice 3: Incorrect
int choice3e(){
    cout<<"You chose the door on the right."<<endl;
    cout<<"You approach the door and unfortunately, you have chosen incorrectly."<<endl;
    cout<<"You fall down a large chute and you are back where you started."<<endl;
    char anything;
    cout<<"Type anything to continue."<<endl;
    cin>>anything; 
    anything = gameover(); 
}

//The End--You Win
int youwin(){
    cout<<"Congrats. You made it to the end. Now, what?"<<endl;
    exit(0); 
}

//Game Over
int gameover(){
    cout<<"GAME OVER. Do you want to try again? (Y/N)"<<endl; 
    char answer;
    cin>>answer;
        if (answer == 'Y' || answer == 'y'){
            answer = main(); 
        }
        if (answer != 'y' && answer != 'Y')
            cout<<"Goodbye."<<endl; 
    exit(0); 
}

//Default 
void def(int inA){
    cout<<"You exited the game."<<endl;
    exit(0);
}
