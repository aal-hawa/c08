#include "Span.hpp"

Span::Span(unsigned int N) : _maxSize(N) {}

Span::Span(const Span& other) : _maxSize(other._maxSize), _data(other._data) {}

Span& Span::operator=(const Span& other) 
{
	if (this != &other)
	{
		_maxSize = other._maxSize;
		_data = other._data;

	}
	return *this;
}

Span::~Span() {}

void Span::addNumber(int number)
{
	if (_data.size() >= _maxSize)
		throw std::out_of_range("Span is full. Cannot add more numbers.");
	_data.push_back(number);
}

int Span::shortestSpan() const 
{
	if (_data.size() < 2)
		throw std::logic_error("Not enough numbers to find a span.");

	std::vector<int> sorted = _data;
	std::sort(sorted.begin(), sorted.end());

	int minSpan = sorted[1] - sorted[0];

	for (size_t i = 2; i < sorted.size(); ++i)
	{
		int span = sorted[i] - sorted[i - 1];
		if (span < minSpan)
			minSpan = span;
		
	}
	return minSpan;
}

int Span::longestSpan() const
{
	if (_data.size() < 2)
        throw std::logic_error("Not enough numbers to find a span.");

	int min = *std::min_element(_data.begin(), _data.end());
	int max = *std::max_element(_data.begin(), _data.end());

	return max - min;
}