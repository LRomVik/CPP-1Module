#include<iostream>
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
int main()
{
	isEven();
	return 0;
}
