#include <iostream>
#include "Span.hpp"
#include <cstdlib>
#include <ctime>

int main()
{
	try {
			Span sp = Span(5);
			sp.addNumber(6);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		
			// Big test with 10,000 numbers
			Span bigSpan(10000);
			std::srand(time(NULL));
			// std::vector<int> nums;
			for (int i = 0; i < 10000; ++i)
				bigSpan.addNumber(std::rand());

			// bigSpan.addRange(nums.begin(), nums.end());
			std::cout << "Big Span - Shortest: " << bigSpan.shortestSpan() << std::endl;
			std::cout << "Big Span - Longest: " << bigSpan.longestSpan() << std::endl;
		}
		catch(const std::exception & e)
		{
			std::cerr << "exception: " << e.what() << std::endl;
		}
		return 0;
}