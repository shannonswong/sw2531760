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
int roomA(); //room A
int getA(); //room A
void def(int); //default
int option1a(); //option 1 room A
int option2a(); //option 2 room A
int option3a(); //option 3 room A
int roomB(); //room B
int getB(); //room B
int option1b(); //option 1 room B
int option2b(); //option 2 room B
int dicegame(); //dice game for option2 room B
int option3b(); //option 3 room B
int roomC(); //room C
int getC(); //room C
int option1c(); //option 1 room C
int option2c(); //option 2 room C
int option3c(); //option 3 room C
int roomD(); //room D
int getD(); //room D
int option1d(); //option 1 room D
int option2d(); //option 2 room D
int option3d(); //option 3 room D
int roomE(); //room E
int getE(); //room E
int option1e(); //option 1 room E
int option2e(); //option 2 room E
int option3e(); //option 3 room E
int youwin(); //the end

int gameover(); //game over

//Execution Begins Here: 
int main() {
//Intro
    char enter;
    cout<<"Welcome to the game: Choose a Door"<<endl;
    cout<<"Type anything to begin."<<endl;
    cin>>enter;
    
     //Set the random seed
    srand(static_cast<unsigned int>(time(0)));
    
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
//Room C
int inC;
        roomC();
        inC=getC();
        switch(inC){
            case 1: option1c();break; //option 1 room C 
            case 2: option2c();break; //option 2 room C
            case 3: option3c();break; //option 3 room C
            default:;
        };
//Room D
int inD;
        roomD();
        inD=getD();
        switch(inD){
            case 1: option1d();break; //option 1 room D
            case 2: option2d();break; //option 2 room D
            case 3: option3d();break; //option 3 room D
            default:;
        };
//Room E
int inE;
        roomE();
        inE=getE();
        switch(inE){
            case 1: option1e();break; //option 1 room E
            case 2: option2e();break; //option 2 room E
            case 3: option3e();break; //option 3 room E
            default:;
        };
    return 0;
}

//Room A Menu
int roomA(){
    cout<<"ROOM A"<<endl;
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
        char answer2;
        cout<<"Incorrect."<<endl;
        cout<<"Type anything"<<endl;
        cin>>answer2;
        answer2 = gameover();
        }
}

//Room A Option 2: The incorrect door 
int option2a(){
    cout<<"You choose the door on the right."<<endl;
    cout<<"Unfortunately, when you go to open the door, you fall into a large"
            "chute and end up where you started."<<endl;
    cout<<"Type anything."<<endl;
    char answer;
    cin>>answer;
    answer = gameover(); 
}

//Room A Option 3: I'm not sure why this is here but hey
int option3a(){
    cout<<"You give up."<<endl;
    cout<<"Type anything."<<endl; 
    char answer;
    cin>>answer;
    answer = gameover(); 
}

//Room B Menu 
int roomB(){
    cout<<"ROOM B"<<endl;
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

//Room B Option 1: Incorrect
int option1b(){ //left door incorrect
	cout<<"You chose the left door."<<endl;
	cout<<"You approach the door and unfortunately, you have chosen incorrectly."<<endl;
	cout<<"You fall down a large chute and you are back where you started."<<endl;
	char anything;
	cout<<"Type anything to continue."<<endl;
	cin>>anything; 
	anything = gameover(); 
}

//Room B Option 2: Correct
int option2b(){
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
//Room B Option 2: Game
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
    	anything = roomC(); 
    }
    else cout<<"Sorry. You did not win."<<endl;
        cout<<"You must return to the previous room."<<endl;
    	cout<<"Type anything to proceed."<<endl;
    	char anything2;
    	cin>>anything2;
    	anything2 = roomA();  
}

//Room B Option 3: Incorrect
int option3b(){
    cout<<"You choose the door on the right."<<endl;
    cout<<"Type anything."<<endl;
    char anything;
    cin>>anything;
    anything = gameover(); 
}

//Room C 
int roomC(){
    cout<<"ROOM C"<<endl;
    cout<<"You proceed to the next room. \nYou see three doors, again."<<endl;
    cout<<"Which do you choose?"<<endl;
    cout<<"[TYPE] 1: Left Door."<<endl; 
    cout<<"[TYPE] 2: Middle Door."<<endl;
    cout<<"[TYPE] 3: Right Door."<<endl; 
}

//Room C Choice
int getC(){
    int inC;
    cin>>inC;
    return inC;
}

//Room C Option 1: Incorrect
int option1c(){
    cout<<"You chose the left door."<<endl;
    cout<<"You approach the door and unfortunately, you have chosen incorrectly."<<endl;
    cout<<"You fall down a large chute and you are back where you started."<<endl;
    char anything;
    cout<<"Type anything to continue."<<endl;
    cin>>anything; 
    anything = gameover();     
}

//Room C Option 2: Incorrect
int option2c(){
    cout<<"You chose the middle door."<<endl;
    cout<<"You approach the door and unfortunately, you have chosen incorrectly."<<endl;
    cout<<"You fall down a large chute and you are back where you started."<<endl;
    char anything;
    cout<<"Type anything to continue."<<endl;
    cin>>anything; 
    anything = gameover(); 
}

//Room C Option 3: Correct
int option3c(){
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
        anything = roomD(); 
    }
    else{ 
        cout<<"Incorrect. Sorry. Type anything to go back to the previous room."<<endl;
        cin>>anything2; 
        anything2 = roomB(); 
    }    
} 

//Room D
int roomD(){
    cout<<"ROOM D"<<endl;
    cout<<"Wow, you've made it pretty far."<<endl;
    cout<<"Which do door do choose, now?"<<endl;
    cout<<"[TYPE] 1: Left Door."<<endl; 
    cout<<"[TYPE] 2: Middle Door."<<endl;
    cout<<"[TYPE] 3: Right Door."<<endl;
}

//Room D Option
int getD(){
    int inD;
    cin>>inD;
    return inD;
}

//Room D Option 1: Incorrect
int option1d(){
    cout<<"You chose the left door."<<endl;
    cout<<"You approach the door and unfortunately, you have chosen incorrectly."<<endl;
    cout<<"You fall down a large chute and you are back where you started."<<endl;
    char anything;
    cout<<"Type anything to continue."<<endl;
    cin>>anything; 
    anything = gameover();     
}

//Room D Option 2: Incorrect
int option2d(){
    cout<<"You chose the middle door."<<endl;
    cout<<"You approach the door and unfortunately, you have chosen incorrectly."<<endl;
    cout<<"You fall down a large chute and you are back where you started."<<endl;
    char anything;
    cout<<"Type anything to continue."<<endl;
    cin>>anything; 
    anything = gameover(); 
}

//Room D Option 3: Correct
int option3d(){
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
        anything = roomE(); 
    }
    else {
        cout<<"Incorrect. Go back."<<endl;
        cin>>anything2;
        anything2 = roomC(); 
    }
}

//Room E
int roomE(){
    cout<<"ROOM E"<<endl;
    cout<<"Well, which do door do choose, now?"<<endl;
    cout<<"[TYPE] 1: Left Door."<<endl; 
    cout<<"[TYPE] 2: Middle Door."<<endl;
    cout<<"[TYPE] 3: Right Door."<<endl;
}

//Room E Option
int getE(){
    int inE;
    cin>>inE;
    return inE;
}

//Room E Option 1: Incorrect
int option1e(){
    cout<<"You chose the left door."<<endl;
    cout<<"You approach the door and unfortunately, you have chosen incorrectly."<<endl;
    cout<<"You fall down a large chute and you are back where you started."<<endl;
    char anything;
    cout<<"Type anything to continue."<<endl;
    cin>>anything; 
    anything = gameover();     
}

//Room E Option 2: Correct
int option2e(){
    float thing; 
    cout<<"Correct door."<<endl;
    cout<<"Solve:"; 
}

//Room E Option 3: Incorrect
int option3e(){
    cout<<"You chose the middle door."<<endl;
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
    return 0; 
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
            cout<<"Goodbye"<<endl; 
    return 0; 
}

//Default 
void def(int inA){
    cout<<"You exited the game."<<endl;
}
