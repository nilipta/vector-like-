#ifndef STACKH
#define STACKH

#include <string>

#include <iostream>
#include <algorithm>
#include "Circle.h"

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
		class sortingFunc
		{
			public:
				sortingFunc(){};



				bool operator() (T var1, T var2)
				{
					return var1 < var2;
				}


		}sortingFuncObj ;

		class sortingClass
		{
			public:
				sortingClass(){}

            bool operator() (Circle* var1, Circle* var2)
				{
                	if(var1->getArea() > var2->getArea())
						return false;
				}
		} ascendingObj;

	private:
		T *P_Array;
		int ArraySize;
        int CurrentIndex;
};



template <class T>
Stack<T>::Stack()
{
	P_Array = new T[10];
	std::cout << "P_Array size = " <<sizeof(P_Array) << std::endl;
	CurrentIndex = -1;
	ArraySize = 10;
	std::cout << "ArraySize = "<< ArraySize << std::endl;
}

template <class T>
Stack<T>::~Stack()
{
	delete[] P_Array;
	P_Array = NULL;
}

template <class T>
bool Stack<T>::push(T valArg)
{
//std::cout << "CurrentIndex in string = " << CurrentIndex << " N ArraySize = "<< ArraySize << std::endl;
	if(CurrentIndex >= (ArraySize-1) )
	{
		std::cout << "Memory Increasing = " << std::endl;
		int oldArraySize = ArraySize;
		ArraySize += 10;
		T *P_Array_temp = new T[ArraySize];

		if(P_Array_temp)
		{
			for(unsigned int i =0; i <= oldArraySize ; i++ )
			{
				P_Array_temp[i] = P_Array[i];
			}



			delete[] P_Array;
			P_Array =  new T[ArraySize];
			for(unsigned int i =0; i <= oldArraySize ; i++ )
			{
				P_Array[i] =  P_Array_temp[i];
			}



			delete[] P_Array_temp;
			P_Array_temp = NULL;
		}
		else
		{
			std::cout << "The requested int push cant be performed" << std::endl;
			return 1;
		}
	}
	CurrentIndex++;
	P_Array[CurrentIndex] = valArg;
}


template <class T>
T Stack<T>::pop()
{
	T *P_Array_temp = new T[CurrentIndex];
	ArraySize = CurrentIndex;
	T returningValue =  P_Array[CurrentIndex];


	//copying original string pointer to temp string pointer
	for(unsigned int i =0; i <= CurrentIndex ; i++ )
	{
		P_Array_temp[i] = P_Array[i];
	}

	delete[] P_Array;
	P_Array =  new T[CurrentIndex+1];

	//copying temp string pointer to original string pointer
	for(unsigned int i =0; i <= CurrentIndex ; i++ )
	{
		P_Array[i] = P_Array_temp[i] ;
	}

	delete[] P_Array_temp;
	P_Array_temp = NULL;
	//std::cout << "Popped : " << returningValue  << std::endl;
    --CurrentIndex;		//removing popped index

	return returningValue;
}


template <class T>
void Stack<T>::print_all()
{
	for(int i = 0; i <= CurrentIndex ; i++ )
	{
		std::cout << "Elements in vector-like = " << i << " = " << P_Array[i] << std::endl;
	}
}

template <>
void Stack<Circle* >::sortAscending()
{
	std::sort(&P_Array[0], &P_Array[CurrentIndex+1], ascendingObj );
	for(int i = 0; i <= CurrentIndex ; i++ )
	{
		std::cout << "The index= " << i << " value = " << P_Array[i]->getArea() <<std::endl;
	}
}

template <class T>
void Stack<T>::sortAscending()
{
	std::sort(&P_Array[0], &P_Array[CurrentIndex+1], sortingFuncObj);
	for(int i = 0; i <= CurrentIndex ; i++ )
	{
		std::cout << "The index= " << i << " value = " << P_Array[i] <<std::endl;
	}
}





#endif
