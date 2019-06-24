#ifndef STACKH
#define STACKH

#include <string>

#define SIZE = 10;

template <class T>
class Stack{
	public:
		Stack();
		~Stack();
		void print_all();
		bool push(T valArg);
		T pop();

	private:
		T *P_Array;
		int ArraySize;

	private:
		void push_to_int();
        int CurrentIndex;
};

#endif
