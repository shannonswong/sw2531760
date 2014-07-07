/* 
 * File:   Gaddis_7thEd_Chap4_Prob4
 * Author: Shannon Wong
 * Purpose: Areas of Rectangles
 * Created on July 6, 2014, 7:40 PM
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
 * //Execution
 */

int main(int argc, char** argv) {

//Declare Variables: Lengths and Widths
  int l1, l2, w1, w2;
  
//Prompt User to Input Lengths and Widths
  cout<<"Enter the LENGTH of the FIRST Rectangle: "<<endl;
  cin>>l1;
  cout<<"Enter the WIDTH of the FIRST Rectangle: "<<endl;
  cin>>w1;
  
  cout<<"Enter the LENGTH of the SECOND Rectangle: "<<endl;
  cin>>l2;
  cout<<"Enter the WIDTH of the SECOND Rectangle: "<<endl;
  cin>>w2;
  
//Calculate Areas
  int area1 = l1 * w1;
  int area2 = l2 * w2;
  
//Which Area is Greater? Output
  if (area1 > area2)
      cout<<"The FIRST Rectangle has a larger area.";
  else if (area1 < area2)
      cout<<"The SECOND Rectangle has a larger area.";
  else if (area1 == area2)
      cout<<"The areas of both rectangles are equal.";
    
    return 0;
}

