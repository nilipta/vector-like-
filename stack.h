#ifndef STACKH
#define STACKH

#include <string>

#define SIZE = 10;

class Stack{
	public:
		Stack();
		~Stack();
		void int_print_all();
		bool push(int valArg);
		bool push(double valArg);
		bool push(std::string valArg);
		int pop();

	public:
		enum printCategory
		{
			intPrint = 0,
			doublePrint,
			stringPrint
		};

	private:
		int *P_int;
		double *P_double;
		std::string *P_string;
		int ArraySize;
		printCategory checkCategory;

	private:
		void push_to_int();
        int CurrentIndex;
};

#endif
