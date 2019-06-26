#ifndef CIRCLEH
#define CIRCLEH

#include <string>

class Circle{

	public:
		Circle();
		Circle(double, double, std::string);
		~Circle();
        double getArea();

	private:
		double radius;
		double center;
		double area;
		std::string circlename;
};

#endif
