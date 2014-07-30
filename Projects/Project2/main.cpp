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
int choice4a(); 
int sceneB(); //scene B
int getB(); //scene B
void def(int); //default
int choice1b(); //choice 1 scene B
int choice2b(); //choice 2 scene B
int choice3b(); //choice 3  B
int sceneC(); //scene C
int getC(); //scene C
void def(int); //default
int choice1c(); //choice 1 scene C
int choice2c(); //choice 2 scene C
int choice3c(); //choice 3  C

int youwin(); //the end
int gameover(); //game over


//Execution Begins Here: 
int main() {
//Intro
    char enter;
    cout<<"Welcome to the Tiny Adventure. \nYou will be navigating through"
            "perilous obstacles to reach your ultimate goal."
            "\nAre you up for the challenge?"<<endl;
    cout<<"If so, type anything to continue."<<endl;
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
////scene D
//int inD;
//        sceneD();
//        inD=getD();
//        switch(inD){
//            case 1: choice1d();break; //choice 1 scene D
//            case 2: choice2d();break; //choice 2 scene D
//            case 3: choice3d();break; //choice 3 scene D
//            default:;
//        };
////scene E
//int inE;
//        sceneE();
//        inE=getE();
//        switch(inE){
//            case 1: choice1e();break; //choice 1 scene E
//            case 2: choice2e();break; //choice 2 scene E
//            case 3: choice3e();break; //choice 3 scene E
//            default:;
//        };
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
    do{
        if (anything != 1 && anything !=3 && anything !=4){
            cout<<"Invalid choice."<<endl;
        }
    else {
        switch (anything){
            case 1: choice1a();break;
            case 2: choice2a();break;
            case 3: choice3a();break;
            default:;
        };
      }
    }
    while (anything == 1 || anything == 3 || anything == 4);
}

int choice3a(){
//Declare variables
    char something;
    int enter; 
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
    cin>>enter; 
    if (enter != 1 && enter !=2 && enter !=4){
        cout<<"Invalid choice."<<endl; 
    }
    do{
    switch (enter){
        case 1: choice1a();break;
        case 2: choice2a();break;
        case 3: choice3a();break;
        default:;
    };
    }
    while (enter == 1 || enter == 2 || enter == 4);
}

int choice4a(){
//Declare variables
    char anything;
//choice4a story
    cout<<"You go back to sleep."<<endl;
    cout<<"Type anything to continue."<<endl;
    cin>>anything;
    anything = gameover(); 
}

int sceneB(){
//sceneB story
    cout<<"Now that you have a key, you have new choices to make."<<endl;
    cout<<"--------------CHOICES--------------"<<endl;
    cout<<"[TYPE] 1: Put it back."<<endl;
    cout<<"[TYPE] 2: Investigate the desk."<<endl;
    cout<<"[TYPE] 3: Investigate the rest of the room."<<endl; 
}

//scene B Choice
int getB(){
        int inB;
        cin>>inB;
        return inB;
}

//scene B choice 1: put it back
int choice1b(){
    char anything;
    int enter; 
    cout<<"You put the key back."<<endl;
    cout<<"Wow, that's useless. Why did you do that?"<<endl;
    cout<<"Type anything to continue."<<endl;
    cin>>anything; 
    cout<<"--------------CHOICES--------------"<<endl;
    cout<<"--------"<<endl;
    cout<<"[TYPE] 2: Investigate the desk."<<endl;
    cout<<"[TYPE] 3: Investigate the rest of the room."<<endl; 
    cin>>enter;
    if (enter==2){
        choice2b();
    }
    else if (enter==3){
        choice3b();
    }
    else cout<<"Invalid choice."<<endl;
}

//scene B choice 2: Correct
int choice2b(){
    char anything;
    int enter;
    cout<<"You investigate the desk. There is nothing."<<endl;
    cout<<"Type anything to continue."<<endl;
    cin>>anything;
    cout<<"--------------CHOICES--------------"<<endl;
    cout<<"[TYPE] 1: Put it back."<<endl;
    cout<<"-------"<<endl;
    cout<<"[TYPE] 3: Investigate the rest of the room."<<endl; 
    cin>>enter;
    if (enter==1){
        choice1b();
    }
    else if (enter==3){
        choice3b();
    }
    else cout<<"Invalid choice."<<endl;
}	

int choice3b(){
    char anything;
    cout<<"You search the room. Since the door is locked, you try to look"
            "\n for something else to unlock. \nThere is a small door behind your"
            "bed. \nYou successfully unlock the door and enter."<<endl;
    cout<<"You see that you're in a very large and much brighter room."
            "\nThe room's walls are a rather vibrant shade of purple\n"
            "with plush carpet that matched. \nHowever, you see that there"
            "is nothing in the room besides a small desk and three doors."
            "What's up with all these empty rooms?"<<endl;
    cout<<"(Type anything to continue.)"<<endl;
    cin>>anything; 
    anything = sceneC();
}

int sceneC(){
    cout<<"You head on over to the desk. On it are pieces of neatly folded"
            "stationary. You pick the first page up to read it."<<endl;
    cout<<"It says: Hello, I'm glad you made it this far. I know you"
            "\nwant to escape but you just have to go \nthrough this..."
            "security system I set up. Yes, that's how it is"
            "around these parts. Now, choose a door and choose wisely."<<endl;
    cout<<"You look to the doors. There are three to choose from."<<endl; 
    cout<<"--------------CHOICES--------------"<<endl;
    cout<<"[TYPE] 1: door on the left."<<endl;
    cout<<"[TYPE] 2: door in the middle."<<endl;
    cout<<"[TYPE] 3: door on the right."<<endl;
}

int choice1c(){
    char anything;
    int enter;
    cout<<"You chose the door on the left. It opens but it's just an"
            "\empty closet."<<endl;
    cout<<"Type anything to continue."<<endl;
    cin>>anything; 
    cout<<"--------------CHOICES--------------"<<endl;
    cout<<"------"<<endl;
    cout<<"[TYPE] 2: door in the middle."<<endl;
    cout<<"[TYPE] 3: door on the right."<<endl;
    cin>>enter;
    if (enter==2){
        choice2c();
    }
    else if (enter==3){
        choice3c();
    }
    else cout<<"Invalid choice."<<endl;
}

int choice2c(){
//Declare variables
    
//choice2c story
    cout<<"You chose the door in the middle. It is locked but there is a"
            "\nnote that tells you to head back to the desk and"
            "\nsee the papers for a way to open the door."<<endl;
    cout<<"The paper says: If you can solve this simple math problem,\n"
            "you'll be able to continue on your journey out of here."<<endl;
    cout<<"";
            
            
}
int choice3c(){
  char anything;
    int enter;
    cout<<"You chose the door on the right. It opens but it's just an"
            "\empty closet."<<endl;
    cout<<"Type anything to continue."<<endl;
    cin>>anything; 
    cout<<"--------------CHOICES--------------"<<endl;
    cout<<"[TYPE] 1: door on the left."<<endl;
    cout<<"[TYPE] 2: door in the middle."<<endl;
    cout<<"------"<<endl;
    cin>>enter;
    if (enter==1){
        choice1c();
    }
    else if (enter==3){
        choice3c();
    }
    else cout<<"Invalid choice."<<endl;  
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
