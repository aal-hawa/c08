#include <iostream>
#include <vector>
#include <list>
#include "easyfind.hpp"


int main() 
{
	std::vector<int> vec;
	for (int i = 1; i <= 5; ++i)
		vec.push_back(i * 10);

	try
	{
		std::vector<int>::iterator it = easyfind(vec, 30);
		std::cout << "Found: " << *it << std::endl;

	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	
	try
	{
		std::vector<int>::iterator it = easyfind(vec, 100);
		std::cout << "Found: " << *it << std::endl;

	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	
	std::list<int> lst;
	lst.push_back(42);
	lst.push_back(84);

	try
	{
		std::list<int>::iterator it = easyfind(lst, 42);
		std::cout << "Found in list: " << *it << std::endl;

	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	return 0;
}