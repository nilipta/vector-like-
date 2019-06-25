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
		void sortAscending();
		void sortDescending();
		T pop();

	public:
		class sortingClass
		{
			public:
				sortingClass(){sortingDirection = 0;}
				sortingClass(int direction){sortingDirection = direction;}
				bool operator() (T var1, T var2)
				{
					//std::cout << "The operator var1 = " << var1 << std::endl;
					//std::cout << "The operator var2 = " << var2 << std::endl;
					if(!sortingDirection)
						return var1<var2;
					else
						return var1>var2;
				}
			private:
				int	sortingDirection;
		} ascendingObj;

	private:
		T *P_Array;
		int ArraySize;
        int CurrentIndex;
};




#endif
