/* 
 * File:   Gaddis_7thEd_Chap4_Prob11
 * Author: Shannon Wong
 * Purpose: Geometry Calculatr
 * Created on July 7, 2014, 6:10 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
//Declare  Variables
	const float pi = 3.14159;
	float radius, length, width, base, height;
	int choice; 
 
//Display Menu
	cout<<"Geometry Calculator \n"<<endl; 
	cout<<"1. Calculate the Area of a Circle.\n";
	cout<<"2. Calculate the Area of a Rectangle.\n";
	cout<<"3. Calculate the Area of a Triangle.\n";
	cout<<"4. Quit.\n\n";
	cout<<"Enter Your Choice."<<endl;
	cin>>choice;
 
	if (choice>= 1 && choice<=4)
	{ 
		switch (choice)
		{
			case 1: 
			cout<<"\n";
			cout<<"Enter The Radius of the Circle."<<endl;
			cin>>radius; 
 
			if (radius>=0)
			{
				float area1 = pi * radius * radius;
				cout<<"The area of the circle is: "<<area1<<endl;
			}
			else
			{ 
				cout<<"The radius cannot be a negative value."<<endl;
			}
			break;
 
		case 2:
			cout<<"\n"<<endl;
			cout<<"Enter the Length of the Rectangle:\n"<<endl;
			cin>>length;
			cout<<"Enter the Width of the Rectangle:\n"<<endl;
			cin>>width;
 
			if (length>0 && width>0)
			{ 
				float area2 = length * width;
				cout<<"The area of the rectangle is: "<<area2<<endl;
			}
			else
			{
				cout<<"\n Cannot have negative values."<<endl;
			}
			break;
 
		case 3:
			cout<<"\n"<<endl;
			cout<<"Enter the Base of the Triangle:\n"<<endl;
			cin>>base;
			cout<<"Enter the Height of the Triangle:\n"<<endl;
			cin>>height;
 
			if (base>0 && height>0)
			{
				float area3 = 0.5 * base * height;
				cout<<"The area of the triangle is: "<<area3<<endl;
			}
			else
			{
				cout<<"\n Cannot have negative values."<<endl;
			}
			break; 
		}
	}
	else
	{
		cout<<"The valid choices are 1-4."<<endl;
		cout<<"Run the program again and try another selection."<<endl;
	}
 

    return 0;
}

