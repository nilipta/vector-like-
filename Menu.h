
#include <iostream>

class Menu{
  public:
	Menu(){};
	void start();
  private:
};

void Menu::start()
{
	std::cout << "Enter Option \n\t1:\tEnter 1 to push an element\n\t2:\tEnter 2 to pop an element\n" <<  std::endl;
	int choice;

	do
	{
		switch(choice)
			{
			case 1:
	std::cout << "Enter the number to push" <<  std::endl;
				break;
			case 2:
				break;
			}
	}
	while(coice>1 && choice>2);
}