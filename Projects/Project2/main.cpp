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
            case 4: choice4a();break; //choice 4 scene A
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
    cout<<"You're laying down on a bed, facing the door."<<endl;
    cout<<"The room is dimly lit by a stub of a flickering candle that rests "
            "upon the only piece of furniture in the room--a small,"
            " wooden desk."<<endl;
    cout<<"Well, there is also the uncomfortably stiff bed you happen"
            "to be laying on, but that's it."<<endl;
    cout<<"You have decisions to make, now. Which do you choose?"<<endl;
    cout<<"--------------CHOICES--------------"<<endl;
    cout<<"[TYPE] 1: Go to the desk"<<endl;
    cout<<"[TYPE] 2: Try to open the door."<<endl;
    cout<<"[TYPE] 3: Investigate your bed."<<endl;
    cout<<"[TYPE] 4: Go back to sleep."<<endl;
}

//scene A Choice
int getA(){
        int inA;
        cin>>inA;
        return inA;
}

//scene A choice 1: desk 
int choice1a(){
//declare variables
    char anything; 
//choice1a story 
    cout<<"You get up and head on over to the desk."<<endl;
    cout<<"You see that there is a key next to the candle."<<endl;
    cout<<"Well, that was easy. What next?"<<endl;
    cout<<"Type anything to continue."<<endl;
    cin>>anything;
    anything = sceneB(); 
    
}

//scene A choice 2: door 
int choice2a(){
//Declare variables
    char something;
    int anything; 
//choice2a story
    cout<<"You head to the door."<<endl;
    cout<<"You try to open the door but unfortunately, it is locked"
            "from the outside."<<endl;
    cout<<"Type something to continue."<<endl;
    cin>>something; 
    cout<<"--------------CHOICES--------------"<<endl;
    cout<<"[TYPE] 1: Go to the desk"<<endl;
    cout<<"---------"<<endl;
    cout<<"[TYPE] 3: Investigate your bed."<<endl;
    cout<<"[TYPE] 4: Go back to sleep."<<endl;
    cin>>anything; 
    if (anything != 1 && anything !=3 && anything !=4){
        cout<<"Invalid choice."<<endl; 
    }
    do{
    switch (anything){
        case 1: choice1a();break;
        case 2: choice2a();break;
        case 3: choice3a();break;
        default:;
    };
    }
    while (anything == 1 || anything == 3 || anything == 4);
}

int choice3a(){
//Declare variables
    char something;
    int anything; 
//choice3a story
    cout<<"You investigate your bed.\n"
            "Although you search all over the bed, you find nothing."<<endl;
    cout<<"Type something to continue."<<endl;
    cin>>something;
    cout<<"--------------CHOICES--------------"<<endl;
    cout<<"[TYPE] 1: Go to the desk"<<endl;
    cout<<"[TYPE] 2: Try to open the door."<<endl;
    cout<<"-------"<<endl;
    cout<<"[TYPE] 4: Go back to sleep."<<endl;
    if (anything != 1 && anything !=2 && anything !=4){
        cout<<"Invalid choice."<<endl; 
    }
    do{
    switch (anything){
        case 1: choice1a();break;
        case 2: choice2a();break;
        case 3: choice3a();break;
        default:;
    };
    }
    while (anything == 1 || anything == 2 || anything == 4);
}

int choice4a(){
//Declare variables
    char anything;
//choice4a story
    cout<<"You go back to sleep."<<endl;
    cout<<"Type anything to continue."<<endl;
    cin>>anything
    anything = gameover(); 
}

int sceneB(){
    
}

//scene B Choice
int getB(){
        int inB;
        cin>>inB;
        return inB;
}

//scene B choice 1: Incorrect
int choice1b(){ //left door incorrect
	
}

//scene B choice 2: Correct
int choice2b(){
	
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
    
}

//scene C 
int sceneC(){
    
}

//scene C Choice
int getC(){
    int inC;
    cin>>inC;
    return inC;
}

//scene C choice 1: Incorrect
int choice1c(){
   
}

//scene C choice 2: Incorrect
int choice2c(){
    
}

//scene C choice 3: Correct
int choice3c(){
    
} 

//scene D
int sceneD(){
    
}

//scene D choice
int getD(){
    int inD;
    cin>>inD;
    return inD;
}

//scene D choice 1: Incorrect
int choice1d(){
       
}

//scene D choice 2: Incorrect
int choice2d(){
    
}

//scene D choice 3: Correct
int choice3d(){
    
}

//scene E
int sceneE(){
    
}

//scene E choice
int getE(){
    int inE;
    cin>>inE;
    return inE;
}

//scene E choice 1: Incorrect
int choice1e(){
     
}

//scene E choice 2: Correct
int choice2e(){
    
}

//scene E choice 3: Incorrect
int choice3e(){
   
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
