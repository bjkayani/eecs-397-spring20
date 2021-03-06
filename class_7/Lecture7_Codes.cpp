// Testing class Point.
#include <iostream>

using std::cout;
using std::endl;

using std::fixed;
#include <iomanip>
using std::setprecision;

#include "point.h"
#include "circle.h"
//#include "cylinder.h"  // Cylinder class definition


int main()
{
	// ----- Point class -- demonstrations 
	Point point(72, 115);     // instantiate Point object

	// display point coordinates	
	cout << "X coordinate is " << point.getX()
		<< "\nY coordinate is " << point.getY();

	//cout << "\nX coordinate is " << point.x
	//	<< "\nY coordinate is " << point.y;

	
	point.setX(10); // set x-coordinate
	point.setY(10); // set y-coordinate
					
	// display new point value
	cout << "\n\nThe new location of point is ";
	point.print();
	cout << endl;

	// ---- Circle class demonstrations
	Circle circle(37, 43, 2.5);  // instantiate Circle object
	// display point coordinates

	//cout << "Call private member of base class" << circle.x;
	
	cout << "X coordinate is " << circle.getX()
		<< "\nY coordinate is " << circle.getY()
		<< "\nRadius is " << circle.getRadius();


	circle.setX(2);          // set new x-coordinate
	circle.setY(2);          // set new y-coordinate
	circle.setRadius(4.25);  // set new radius
							 
	// display new point value
	cout << "\n\nThe new location and radius of circle are\n";
	circle.print();
	
	// display floating-point values with 2 digits of precision
	cout << fixed << setprecision(2);
	
	// display Circle's diameter
	cout << "\nDiameter is " << circle.getDiameter();
	
	// display Circle's circumference
	cout << "\nCircumference is " << circle.getCircumference();
	
	// display Circle's area
	cout << "\nArea is " << circle.getArea();
	cout << endl;

	/*
	// --- Cylinder class demonstrations ---- 
	// instantiate Cylinder object
	Cylinder cylinder(12, 23, 2.5, 5.7);
	
	// display point coordinates
	cout << "X coordinate is " << cylinder.getX()
		<< "\nY coordinate is " << cylinder.getY()
		<< "\nRadius is " << cylinder.getRadius()
		<< "\nHeight is " << cylinder.getHeight();
	
	cylinder.setX(2);          // set new x-coordinate
	cylinder.setY(2);          // set new y-coordinate
	cylinder.setRadius(4.25);  // set new radius
	cylinder.setHeight(10);    // set new height
							   
	// display new cylinder value
	cout << "\n\nThe new location and radius of circle are\n";
	cylinder.print();
	
	// display floating-point values with 2 digits of precision
	cout << fixed << setprecision(2);
	
	// display cylinder's diameter
	cout << "\n\nDiameter is " << cylinder.getDiameter();
	// display cylinder's circumference
	cout << "\nCircumference is "<< cylinder.getCircumference();
	// display cylinder's area
	cout << "\nArea is " << cylinder.getArea();
	// display cylinder's volume
	cout << "\nVolume is " << cylinder.getVolume();
	cout << endl; 
	*/



	return 0;  // indicates successful termination

} // end main


