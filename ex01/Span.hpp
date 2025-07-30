#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <algorithm>
#include <stdexcept>
#include <iterator>

class Span 
{
	private:
		unsigned int _maxSize;
		std::vector<int> _data;

		public:
			Span(unsigned int N);
			Span(const Span& other);
			Span& operator=(const Span& other);
			~Span();

			void addNumber(int number);
			int shortestSpan() const;
			int longestSpan() const;

			template<typename Iterator>
			void addRange(Iterator begin, Iterator end)
			{
				if (static_cast<unsigned int>(std::distance(begin, end)) + _data.size() > _maxSize)
					throw std::out_of_range("Span is full. Cannot add range.");
				_data.insert(_data.end(), begin, end);
			}
};

#endif