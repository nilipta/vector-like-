#include <iostream>
#include "Circle.h"


Circle::Circle(double radiusArg, double centerArg, std::string nameArgs = "noName"):
	radius(radiusArg), center(centerArg), circlename(nameArgs)
{
	std::cout << "\nCircle got Constructed" << std::endl;
	std::cout << "Radius = " << radius <<std::endl;
	std::cout << "Center = " << center << std::endl;
	std::cout << "circleName = " << circlename << std::endl;
}

Circle::~Circle()
{
	//std::cout << "Circle got Destroyed" << std::endl;
}


double Circle::getArea()
{
	area = 3.14 * radius * radius;
	std::cout << "Circle Area = " << area << " Name = " << circlename << std::endl;
	return area;
}