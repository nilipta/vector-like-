#include <iostream>
#include "stack.h"


Stack::Stack()
{
	P_int = new int[10];
	P_double = new double[10];
	P_string = new std::string[10];
	std::cout << "P_int size = " <<sizeof(P_int) << std::endl;
	CurrentIndex = -1;
	ArraySize = 10;
	std::cout << "ArraySize = "<< ArraySize << std::endl;
}

Stack::~Stack()
{
	delete[] P_int;
	delete[] P_double;
	delete[] P_string;
	P_int = NULL;
	P_double = NULL;
	P_string = NULL;
}

bool Stack::push(int valArg)
{
	//std::cout << "CurrentIndex in Int = " << CurrentIndex << " N ArraySize = "<< ArraySize << std::endl;
	checkCategory = intPrint;
	if(CurrentIndex >= (ArraySize-1) )
	{
		std::cout << "Memory Increasing = " << std::endl;
		int oldArraySize = ArraySize;
		ArraySize += 10;
		int *P_int_temp = new int[ArraySize];

		if(P_int_temp)
		{
			for(unsigned int i =0; i <= oldArraySize ; i++ )
			{
				P_int_temp[i] = P_int[i];
			}

			delete[] P_int;
			P_int =  P_int_temp;
			delete[] P_int_temp;
			P_int_temp = NULL;
		}
		else
		{
			std::cout << "The requested int push cant be performed" << std::endl;
			return 1;
		}
	}
	CurrentIndex++;
	P_int[CurrentIndex] = valArg;
}

bool Stack::push(double valArg)
{
	//std::cout << "CurrentIndex in double = " << CurrentIndex << " N ArraySize = "<< ArraySize << std::endl;
	checkCategory = doublePrint;
	if(CurrentIndex >= (ArraySize-1) )
	{
		std::cout << "Memory Increasing = " << std::endl;
		int oldArraySize = ArraySize;
		ArraySize += 10;
		double *P_double_temp = new double[ArraySize];

		if(P_double_temp)
		{
			for(unsigned int i =0; i <= oldArraySize ; i++ )
			{
				P_double_temp[i] = P_double[i];
			}

			delete[] P_double;
			P_double =  P_double_temp;
			delete[] P_double_temp;
			P_double_temp = NULL;
		}
		else
		{
			std::cout << "The requested double push cant be performed" << std::endl;
			return 1;
		}
	}
	CurrentIndex++;
	P_double[CurrentIndex] = valArg;
}

bool Stack::push(std::string valArg)
{
	//std::cout << "CurrentIndex in string = " << CurrentIndex << " N ArraySize = "<< ArraySize << std::endl;
	checkCategory = stringPrint;
	if(CurrentIndex >= (ArraySize-1) )
	{
		std::cout << "Memory Increasing = " << std::endl;
		int oldArraySize = ArraySize;
		ArraySize += 10;
		std::string *P_string_temp = new std::string[ArraySize];

		if(P_string_temp)
		{
			for(unsigned int i =0; i <= oldArraySize ; i++ )
			{
				P_string_temp[i] = P_string[i];
			}

			delete[] P_string;
			P_string =  new std::string[ArraySize];
			for(unsigned int i =0; i <= oldArraySize ; i++ )
			{
				P_string[i] =  P_string_temp[i];
			}

			delete[] P_string_temp;
			P_string_temp = NULL;
		}
		else
		{
			std::cout << "The requested int push cant be performed" << std::endl;
			return 1;
		}
	}
	CurrentIndex++;
	P_string[CurrentIndex] = valArg;
}


int Stack::pop()
{
	if(CurrentIndex < 0)
	{
    	return NULL;
	}
	switch(checkCategory)
	{
		case intPrint:
				{
					int *P_int_temp = new int[CurrentIndex];
					ArraySize = CurrentIndex;
					int returningValue =  P_int[CurrentIndex];
					--CurrentIndex;		//removing popped index

					for(unsigned int i =0; i <= CurrentIndex ; i++ )
						{
							P_int_temp[i] = P_int[i];
						}

					delete[] P_int;
					P_int =  P_int_temp;
					delete[] P_int_temp;
					P_int_temp = NULL;
					std::cout << "Popped : " << returningValue  << std::endl;
				}
			break;
		case doublePrint:
				{
                	double *P_double_temp = new double[CurrentIndex];
					ArraySize = CurrentIndex;
					double returningValue =  P_double[CurrentIndex];
					--CurrentIndex;		//removing popped index

					for(unsigned int i =0; i <= CurrentIndex ; i++ )
						{
							P_double_temp[i] = P_double[i];
						}

					delete[] P_double;
					P_double =  P_double_temp;
					delete[] P_double_temp;
					P_double_temp = NULL;
					std::cout << "Popped : " << returningValue  << std::endl;
				}
			break;
		case stringPrint:
				{
					std::string *P_string_temp = new std::string[CurrentIndex];
					ArraySize = CurrentIndex;
					std::string returningValue =  P_string[CurrentIndex];
					--CurrentIndex;		//removing popped index

					//copying original string pointer to temp string pointer
                    for(unsigned int i =0; i <= CurrentIndex ; i++ )
					{
						P_string_temp[i] = P_string[i];
					}

					delete[] P_string;
					P_string =  new std::string[CurrentIndex+1];

					//copying temp string pointer to original string pointer
					for(unsigned int i =0; i <= CurrentIndex ; i++ )
					{
						P_string[i] = P_string_temp[i] ;
					}

					delete[] P_string_temp;
					P_string_temp = NULL;
					std::cout << "Popped : " << returningValue  << std::endl;
				}
			break;
	}
}

void Stack::int_print_all()
{
	switch (checkCategory) {
		case intPrint:
			for(int i = 0; i <= CurrentIndex ; i++ )
			{
				std::cout << "Elements in vector-like = " << i << " = " << P_int[i] << std::endl;
			}
			break;
		case doublePrint:
			for(int i = 0; i <= CurrentIndex ; i++ )
			{
				std::cout << "Elements in vector-like = " << i << " = " << P_double[i] << std::endl;
			}
			break;
		case stringPrint:
			for(int i = 0; i <= CurrentIndex ; i++ )
			{
				std::cout << "Elements in vector-like = " << i << " = " << P_string[i] << std::endl;
			}
			break;
	default: std::cout << "Your array doesnot exist "<< std::endl;
	}
}

