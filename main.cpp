#pragma hdrstop
#pragma argsused

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif

#include <stdio.h>
#include <iostream>

#include "stack.h"
#include "stack.cpp"

 int _tmain(int argc, _TCHAR* argv[])
{

	/******Int*****/
	Stack<int> obj1;
	obj1.push(25);
	obj1.push(35);
	obj1.push(34);
	obj1.push(23);
	obj1.push(16);
	obj1.push(28);
	obj1.push(95);
	obj1.push(56);
	obj1.push(96);
	obj1.push(67);
	obj1.push(1000);
	obj1.print_all();

	std::cout  << "\n--------------------------------------\n" << std::endl;
	std::cout  << "Popppping 4 \n" << std::endl;
	for(int i = 0; i < 4 ; i++)
		std::cout << obj1.pop() << std::endl;
	obj1.print_all();

	std::cout  << "\n--------------------------------------\n" << std::endl;
	std::cout  << "pushing 2 \n" << std::endl;
	obj1.push(100);
	obj1.push(101);
	obj1.print_all();

	std::cout  << "\n--------------------------------------\n" << std::endl;
    std::cout  << "Popppping 2 \n" << std::endl;
	for(int i = 0; i < 2 ; i++)
		std::cout << obj1.pop() << std::endl;
	obj1.print_all();

	std::cout  << "Sorting Ascending \n" << std::endl;
	obj1.sortAscending();

	std::cout  << "Sorting Descending \n" << std::endl;
	obj1.sortDescending();

	/* #################################################################### */

	/*****  DOUBLE ****
	Stack<double> obj2;
	std::cout  << "pushing 12 \n" << std::endl;
	obj2.push(25.5);
	obj2.push(35.5);
	obj2.push(34.4);
	obj2.push(23.3);
	obj2.push(25.5);
	obj2.push(35.5);
	obj2.push(34.4);
	obj2.push(23.3);
	obj2.push(25.5);
	obj2.push(35.5);
	obj2.push(34.4);
	obj2.push(23.3);
	obj2.print_all();

	std::cout  << "\n--------------------------------------\n" << std::endl;
	std::cout  << "Popppping 4 \n" << std::endl;
	for(int i = 0; i < 4 ; i++)
		std::cout << obj2.pop() << std::endl;
	obj2.print_all();

	std::cout  << "\n--------------------------------------\n" << std::endl;
	std::cout  << "pushing 6 \n" << std::endl;
	obj2.push(23.3);
	obj2.push(25.5);
	obj2.push(35.5);
	obj2.push(34.4);
	obj2.push(23.3);
	obj2.push(25.5);
	obj2.print_all();

	std::cout  << "Sorting Ascending \n" << std::endl;
	obj2.sortAscending();

	std::cout  << "Sorting Descending \n" << std::endl;
	obj2.sortDescending();
	/* #################################################################### */

	/*****  String ****
	Stack<std::string> obj3;
	std::cout  << "pushing 12 \n" << std::endl;
	obj3.push("A man");
	obj3.push(" IS going ");
	obj3.push(" TO ");
	obj3.push(" LONDON ");
	obj3.push(" and ");
	obj3.push("A woman");
	obj3.push(" IS going ");
	obj3.push(" TO ");
	obj3.push(" LONDON ");
	obj3.push(" also ");
	obj3.push(" This ");
	obj3.push(" is  ");
	obj3.push(" a test ");
	obj3.print_all();

	std::cout  << "\n--------------------------------------\n" << std::endl;
	std::cout  << "Popppping 5 \n" << std::endl;
	for(int i = 0; i < 5 ; i++)
		std::cout << obj3.pop() << std::endl;

	obj3.print_all();

	std::cout  << "\n--------------------------------------\n" << std::endl;
	std::cout  << "pushing 3 \n" << std::endl;
	obj3.push(" This ");
	obj3.push(" is  ");
	obj3.push(" a test ");
	obj3.print_all();

	std::cout  << "Sorting Ascending \n" << std::endl;
	obj3.sortAscending();

	std::cout  << "Sorting Descending \n" << std::endl;
	obj3.sortDescending();
	/* #################################################################### */



	int choice;
	std::cin >> choice;

	return 0;
}
