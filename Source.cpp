#include<iostream>
using namespace std;

bool isEven()
{
	int a;
	std::cout << "Enter a number" << std::endl;
	std::cin >> a;
	if (a % 2 == 0) {
		std::cout << "True" << std::endl;
		std::cout << "Maybe is not true, maybe its lie" << std::endl;
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