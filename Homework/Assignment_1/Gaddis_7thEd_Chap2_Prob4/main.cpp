/* 
 * File:   Gaddis_7thEd_Chap2_Prob4
 * Author: Shannon Wong
 * Purpose: Restaurant Bill
 * Created on June 29, 2014, 7:06 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/* //User Defined Libraries 
 * 
 * //Global Constants
 * 
 * //Function Prototypes
 * 
 * //The Execution Begins...
 */

int main(int argc, char** argv) {

//Declaring and Initializing Variables
  float mealcost = 44.50;
  float tax = .0675;
  float tip = .15;

//Calculate 
  float taxamt = mealcost * tax;
  float plustax = mealcost + taxamt;
  float tipamt = plustax * .15;
  float total = plustax + tipamt;
  
//Output 
  cout<<"  RESTAURANT BILL  "<<endl;
  cout<<"Meal Cost: $"<<mealcost<<endl;
  cout<<"Tax Amount: $"<<taxamt<<endl;
  cout<<"Tip Amount: $"<<tipamt<<endl; 
  cout<<"Total Bill: $"<<total<<endl; 
    
    return 0;
}

