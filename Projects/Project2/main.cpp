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
#include <string>
#include <fstream>
using namespace std;

//Global Constants
const int COLS=5; 

//Function Prototypes
int sceneA(); //scene A
int getA(); //scene A
int choice1a(); //choice 1 scene A
int choice2a(); //choice 2 scene A
int choice3a(); //choice 3 A
int choice4a();
int sceneB(); //scene B
int getB(); //scene B
void def(int); //default
int choice1b(); //choice 1 scene B
int choice2b(); //choice 2 scene B
int choice3b(); //choice 3 B
int sceneC(); //scene C
int getC(); //scene C
int choice1c(); //choice 1 scene C
int choice2c(); //choice 2 scene C
int dicegame(); //dice game function
int choice3c(); //choice 3 C
int sceneD(); //scene D
int getD(); //scene D
int choice1d(); //choice 1 scene D
int choice2d(); //choice 2 scene D
int choice3d(); //choice 3 D
int sceneE(); //scene E
int getE(); //scene E
int choice1e(); //choice 1 scene E
int choice2e(); //choice 2 scene E
int choice3e(); //choice 3 E
int sceneF(); //scene F
int getF(); //scene F
int choice1f(); //choice 1 scene F
int choice2f(); //choice 2 scene F
int choice3f(); //choice 3 F
void fill_Array(int [][COLS],int); //fill array 
void print_Array(const int [][COLS],int); //print 2d array 
int  minimum(const int [][COLS],int); //find min
int  maximum(const int [][COLS],int); //find max
int youwin(); //the end 
int gameover(); //game over
    //Default?
void def(int); //default

//Execution Begins Here: 
int main() {
//Intro
    string yourname[1];
    cout<<"Welcome to the Tiny Adventure. \nYou will be navigating through "
            "perilous \nobstacles to reach your ultimate goal."
            "\nAre you up for the challenge?"<<endl;
    cout<<"If so, enter your name to continue."<<endl;
    getline(cin,yourname[0]); 
    
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
//scene F
int inF;
        sceneF();
        inE=getF();
        switch(inF){
        case 1: choice1f();break; //choice 1 scene F
        case 2: choice2f();break; //choice 2 scene F
        case 3: choice3f();break; //choice 3 scene F
        default:;
 };
    return 0;
}

//scene A story
int sceneA(){
    cout<<"------------------------------------"<<endl;
    cout<<"You suddenly awake and realize \nthat you are in a"
            " mysteriously unfamiliar room."<<endl;
    cout<<"You're laying down on a bed, facing the door."<<endl;
    cout<<"The room is dimly lit by a stub of a \nflickering candle that rests "
            "upon the only piece of \nfurniture in the room--a small,"
            " wooden desk."<<endl;
    cout<<"Well, there is also the uncomfortably \nstiff bed you happen"
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
    cout<<"You try to open the door but unfortunately, \nit is locked "
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
            " bed. \nYou successfully unlock the door and enter."<<endl;
    cout<<"You see that you're in a very large and much brighter room."
            "\nThe room's walls are a rather vibrant shade of purple\n"
            "with plush carpet that matched. \nHowever, you see that there"
            " is nothing in the room besides a \nsmall desk and three doors.\n"
            "What's up with all these empty rooms?"<<endl;
    cout<<"(Type anything to continue.)"<<endl;
    cin>>anything; 
    anything = sceneC();
}

int getC(){
        int inC;
        cin>>inC;
        return inC;
}

int sceneC(){
    cout<<"You head on over to the desk. On it are pieces \nof neatly folded"
            "stationary. \nYou pick the first page up to read it."<<endl;
    cout<<"It says: Hello, I'm glad you made it this far. I know you\n"
            "want to escape but you just have to go \nthrough this..."
            "security system I set up. \nYes, that's how it is"
            " around these parts. \nNow, choose a door and choose wisely."<<endl;
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
            "\nempty closet."<<endl;
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
    unsigned short answer;
    char anything;
//choice2c story
    cout<<"You chose the door in the middle. It is locked but there is a"
            "\nnote that tells you to head back to the desk and"
            "\nsee the papers for a way to open the door."<<endl;
    cout<<"The paper says: If you can solve this simple math problem,\n"
            "you'll be able to continue on your journey out of here."<<endl;
    cout<<"What is: 100 + 200?"<<endl;
    cin>>answer;
    cout<<"You go to the door with your answer."<<endl;
    cout<<"There is a blank panel. You trace "<<answer<<" on it."<<endl;
    if (answer==300){
        cout<<"Although you can't see how it happened, \nthe door suddenly "
                "clicks and opens magically."<<endl;
        cout<<"Type anything to continue."<<endl;
        cin>>anything; 
        anything = sceneD();
    }
    else if (answer != 300){ 
        cout<<"Incorrect. Type anything to continue."<<endl;
        cin>>anything;
        anything = gameover();        
    }
}
    
int choice3c(){
  char anything;
    int enter;
    cout<<"You chose the door on the right. It opens but it's just an"
            "\nempty closet."<<endl;
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

int getD(){
        int inD;
        cin>>inD;
        return inD;
}

int sceneD(){
    cout<<"You manage to enter the next room. Good job."<<endl;
    cout<<"Now you go to choose one of the three doors, as you "
            "did before."<<endl;
    cout<<"--------------CHOICES--------------"<<endl;
    cout<<"[TYPE] 1: door on the left."<<endl;
    cout<<"[TYPE] 2: door in the middle."<<endl;
    cout<<"[TYPE] 3: door on the right."<<endl;
}

int choice1d(){
    char roll;
    cout<<"You approach the door and dice magically emerge "
            "from the center of it."<<endl;
    cout<<"A voice says: You chose wisely. \nHowever, being wise won't"
            "be to your advantage in this game."<<endl;
    cout<<"If you manage to roll a more \neven sums than odd, then "
            "you may proceed."<<endl;
    cout<<"Go ahead and roll the die. (Don't worry they'll stay floating.)"<<endl;
    cout<<"[TYPE A CHARACTER TO ROLL]"<<endl;
    cin>>roll;
    roll = dicegame(); 
}

int choice2d(){
    char anything;
    int enter;
    cout<<"You chose the door on the right. It opens but it's just an"
            "\nempty closet."<<endl;
    cout<<"Type anything to continue."<<endl;
    cin>>anything;
     cout<<"--------------CHOICES--------------"<<endl;
    cout<<"[TYPE] 1: door on the left."<<endl;
    cout<<"[TYPE] 2: door in the middle."<<endl;
    cout<<"---"<<endl;
    cin>>enter;
    if (enter==1){
        choice1d();
    }
    else if (enter==2){
        choice2d();
    }
    else cout<<"Invalid choice."<<endl;
}

int  choice3d(){
    char anything;
    int enter;
    cout<<"You chose the door in the middle. It opens but it's just an"
            "\nempty closet."<<endl;
    cout<<"Type anything to continue."<<endl;
    cin>>anything;
    cout<<"--------------CHOICES--------------"<<endl;
    cout<<"[TYPE] 1: door on the left."<<endl;
    cout<<"----"<<endl;
    cout<<"[TYPE] 3: door on the right."<<endl;
    cin>>enter;
    if (enter==1){
        choice1d();
    }
    else if (enter==3){
        choice3d();
    }
    else cout<<"Invalid choice."<<endl;
}

int dicegame(){
//Declare variables
int wins=0, loss=0;
for(int game=1;game<=7;game++){
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
     anything = sceneE();
    }
    else if (loss>wins){
        cout<<"Sorry. You did not win."<<endl;
        cout<<"Type anything to proceed."<<endl;
        char anything2;
        cin>>anything2;
        anything2 = gameover();
    }   
//Writing to a File
    ofstream outFile;
    outFile.open("results.txt");
    outFile<<cout<<"Results:"<<endl;
    outFile<<cout<<"Losses: "<<loss<<endl;
    outFile<<cout<<"Wins: "<<wins<<endl; 
    outFile.close(); 
}

int getE(){
        int inE;
        cin>>inE;
        return inE;
}

int sceneE(){
    cout<<"Good job. You made it past two doors."<<endl;
    cout<<"I wonder what the next game will be."<<endl;
    cout<<"--------------CHOICES--------------"<<endl;
    cout<<"[TYPE] 1: door on the left."<<endl;
    cout<<"[TYPE] 2: door in the middle."<<endl;
    cout<<"[TYPE] 3: door on the right."<<endl;
}

int choice1e(){
    char anything;
    int enter;
    cout<<"You chose the door on the left. It opens but it's just an"
            "\nempty closet."<<endl;
    cout<<"Type anything to continue."<<endl;
    cin>>anything;
    cout<<"--------------CHOICES--------------"<<endl;
    cout<<"--------"<<endl;
    cout<<"[TYPE] 2: door in the middle."<<endl;
    cout<<"[TYPE] 3: door on the right."<<endl;
    cin>>enter;
    if (enter==2){
        choice2e();
    }
    else if (enter==3){
        choice3e();
    }
    else cout<<"Invalid choice."<<endl;
}

int choice2e(){
    char anything;
    int enter;
    cout<<"You chose the door in the middle. It opens but it's just an"
            "\nempty closet."<<endl;
    cout<<"Type anything to continue."<<endl;
    cin>>anything;
   cout<<"--------------CHOICES--------------"<<endl;
    cout<<"[TYPE] 1: door on the left."<<endl;
    cout<<"--------"<<endl;
    cout<<"[TYPE] 3: door on the right."<<endl;
    cin>>enter;
    if (enter==1){
        choice1e();
    }
    else if (enter==3){
        choice3e();
    }
    else cout<<"Invalid choice."<<endl; 
}

int choice3e(){
    float answer; 
    char anything;
    cout<<"You choose the door on the right."<<endl;
    cout<<"You approach the door and a voice congratulates you."<<endl;
    cout<<"Ah, you chose wisely once again! Now you must answer another"
            " problem. \nA simple physics problem."<<endl;
    cout<<"Determine the kinetic energy of a 625-kg roller \n"
            "coaster car that is moving \nwith a speed of 18.3 m/s."<<endl;
    //Calculate answer to  check
    float ke = 0.5*625*(18.3*18.3);
    cin>>answer; 
    if (answer==1.05e5 || answer==ke){
        cout<<"The answer is "<<ke<<" and you entered "<<answer<<" which"
                " happens to be about correct."<<endl;
        cout<<"Type anything to continue."<<endl;
        cin>>anything; 
        anything = sceneF();
    }
    else { 
        cout<<"Incorrect. Type anything to continue."<<endl;
        cin>>anything;
        anything = gameover();        
    }
}
  
int getF(){
        int inF;
        cin>>inF;
        return inF;
}    

int sceneF(){
    cout<<"More doors!"<<endl;
    cout<<"--------------CHOICES--------------"<<endl;
    cout<<"[TYPE] 1: door on the left."<<endl;
    cout<<"[TYPE] 2: door in the middle."<<endl;
    cout<<"[TYPE] 3: door on the right."<<endl;
}

int choice1f(){
    char anything;
    int enter;
    cout<<"You chose the door on the left. It opens but it's just an"
            "\nempty closet."<<endl;
    cout<<"Type anything to continue."<<endl;
    cin>>anything;
    cout<<"--------------CHOICES--------------"<<endl;
    cout<<"--------"<<endl;
    cout<<"[TYPE] 2: door in the middle."<<endl;
    cout<<"[TYPE] 3: door on the right."<<endl;
    cin>>enter;
    if (enter==2){
        choice2e();
    }
    else if (enter==3){
        choice3e();
    }
    else cout<<"Invalid choice."<<endl;
}

int choice2f(){
    char anything;
    int enter;
    cout<<"You chose the door in the middle. It opens but it's just an"
            "\nempty closet."<<endl;
    cout<<"Type anything to continue."<<endl;
    cin>>anything;
   cout<<"--------------CHOICES--------------"<<endl;
    cout<<"[TYPE] 1: door on the left."<<endl;
    cout<<"--------"<<endl;
    cout<<"[TYPE] 3: door on the right."<<endl;
    cin>>enter;
    if (enter==1){
        choice1e();
    }
    else if (enter==3){
        choice3e();
    }
    else cout<<"Invalid choice."<<endl; 
}

int choice3f(){
    cout<<"You approach the door and it is correct."<<endl;
//Declare array and max size
    const int MAXROWS=3;
    int array[MAXROWS][COLS];
    int actSize=3; 
    int max, min; //max and min of array
    fill_Array(array,actSize); //fill array
    print_Array(array,actSize); //print array
    int ans1, ans2; //user answers
//Door question
    cout<<"Now what are the min and the max of these random values?"<<endl; 
    cout<<"Min: "<<endl;
    cin>>ans1;
    cout<<"Max: "<<endl;
    cin>>ans2; 
//Max and min are
    max=maximum(array,actSize);
    min=minimum(array,actSize);
//Can player proceed?
    if (ans1==min && ans2==max){
        cout<<"Type anything to continue."<<endl;
        char anything;
        cin>>anything;
        youwin();
    }
    else {
        char anything; 
        cout<<"Sorry incorrect."<<endl;
        cout<<"Type anything to continue."<<endl;
        cin>>anything;
        anything = gameover(); 
    }
}

int minimum(const int a[][COLS],int n){
    int mn=a[0][0];
    //Loop for the sum and max/min
    for(int row=0;row<n;row++){
        for(int col=0;col<COLS;col++){
            if(mn>a[row][col])mn=a[row][col];
        }
    }
    return mn;    
}

int maximum(const int a[][COLS],int n){
    int mx=a[0][0];
    //Loop for the sum and max/min
    for(int row=0;row<n;row++){
        for(int col=0;col<COLS;col++){
            if(mx<a[row][col])mx=a[row][col];
        }
    }
    return mx;    
}

void print_Array(const int a[][COLS],int n){
    //Declare any variables
    cout<<endl<<endl;
    for(int row=0;row<n;row++){
        for(int col=0;col<COLS;col++){
            cout<<a[row][col]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<endl;
}

void fill_Array(int a[][COLS],int n){
    for(int row=0;row<n;row++){
        for(int col=0;col<COLS;col++){
            a[row][col]=rand()%3+5;
        }
    }
}
//The End--You Win
int youwin(){
//    string STRING;
//	ifstream infile;
//	infile.open ("fireworks.txt");
//        while(!infile.eof) 
//        {
//	    getline(infile,STRING); 
//	    cout<<STRING; 
//        }
//	infile.close();
    cout<<"Wow. Congrats. You made it to the end."<<endl;
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
void def(int inA, int inB, int inC, int inD, int inE, int inF){
    cout<<"You exited the game."<<endl;
    exit(0);
}