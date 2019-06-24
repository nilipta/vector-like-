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

 int _tmain(int argc, _TCHAR* argv[])
{
     Stack obj1;
	/******Int*****/
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
	obj1.int_print_all();

	std::cout  << "\n--------------------------------------\n" << std::endl;
	std::cout  << "Popppping 4 \n" << std::endl;
	obj1.pop();
	obj1.pop();
	obj1.pop();
	obj1.pop();
	obj1.int_print_all();

	std::cout  << "\n--------------------------------------\n" << std::endl;
	std::cout  << "pushing 2 \n" << std::endl;
	obj1.push(100);
	obj1.push(101);
	obj1.int_print_all();

	std::cout  << "\n--------------------------------------\n" << std::endl;
    std::cout  << "Popppping 2 \n" << std::endl;
    obj1.pop();
	obj1.pop();
	obj1.int_print_all();

	/* #################################################################### */

	/*****  DOUBLE ****
	std::cout  << "pushing 12 \n" << std::endl;
	obj1.push(25.5);
	obj1.push(35.5);
	obj1.push(34.4);
	obj1.push(23.3);
	obj1.push(25.5);
	obj1.push(35.5);
	obj1.push(34.4);
	obj1.push(23.3);
	obj1.push(25.5);
	obj1.push(35.5);
	obj1.push(34.4);
	obj1.push(23.3);
	obj1.int_print_all();

	std::cout  << "\n--------------------------------------\n" << std::endl;
	std::cout  << "Popppping 4 \n" << std::endl;
	obj1.pop();
	obj1.pop();
	obj1.pop();
	obj1.pop();
	obj1.int_print_all();

	std::cout  << "\n--------------------------------------\n" << std::endl;
	std::cout  << "pushing 6 \n" << std::endl;
	obj1.push(23.3);
	obj1.push(25.5);
	obj1.push(35.5);
	obj1.push(34.4);
	obj1.push(23.3);
	obj1.push(25.5);
	obj1.int_print_all();
	/* #################################################################### */

	/*****  String ****
	std::cout  << "pushing 12 \n" << std::endl;
	obj1.push("A man");
	obj1.push(" IS going ");
	obj1.push(" TO ");
	obj1.push(" LONDON ");
	obj1.push(" and ");
	obj1.push("A woman");
	obj1.push(" IS going ");
	obj1.push(" TO ");
	obj1.push(" LONDON ");
	obj1.push(" also ");
	obj1.push(" This ");
	obj1.push(" is  ");
	obj1.push(" a test ");
	obj1.int_print_all();

	std::cout  << "\n--------------------------------------\n" << std::endl;
	std::cout  << "Popppping 5 \n" << std::endl;
	obj1.pop();
	obj1.pop();
	obj1.pop();
	obj1.pop();
	obj1.pop();
	obj1.int_print_all();

	std::cout  << "\n--------------------------------------\n" << std::endl;
	std::cout  << "pushing 3 \n" << std::endl;
	obj1.push(" This ");
	obj1.push(" is  ");
	obj1.push(" a test ");
	obj1.int_print_all();
	/* #################################################################### */



	int choice;
	std::cin >> choice;

	return 0;
}