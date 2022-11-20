//Версия от codik754

#include<iostream>
#include "example.h"
using namespace std;

//Это комментарий

bool isEven()
{
	int a;
	std::cout << "Enter a number" << std::endl;
	std::cin >> a;
	if (a % 2 == 0) {
		std::cout << "True" << std::endl;
		return true;
	}
	else {
		std::cout << "False" << std::endl;
		return false;
	}
}

void fun(){
   cout << "Простая функция" << endl;
}

int main()
{
	isEven();
   fun();
	return 0;
}
