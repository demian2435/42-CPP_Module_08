#include "span.hpp"
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <algorithm>
#include <vector>

/*
int N;
int *array;
int index;
*/

Span::Span(unsigned int _N)
{
	this->N = _N;
	this->index = 0;
}

Span::Span(unsigned int _N, bool _random)
{
	this->N = _N;
	this->index = 0;
	if (_random)
	{
		std::srand(time(0));
		for (unsigned int i = 0; i < this->N; i++)
			this->addNumber(std::rand() % 1000);
	}
}

Span::~Span() {}

Span::Span(const Span &other)
{
	*this = other;
}

Span &Span::operator = (const Span &other)
{
	if (this != &other)
	{
		this->N = other.N;
		this->index = other.index;
		this->array = other.array;
	}
	return (*this);
}

void Span::addNumber(int _n)
{
	if (this->index == this->N)
		throw Span::SpanPieno();
	this->array.push_back(_n);
	this->index++;
}

int Span::shortestSpan(void) const
{
	if (this->index < 2)
		throw Span::PochiElementi();
	std::sort(this->array.begin(), this->array.begin() + this->index);
	return(0);
}

int Span::longestSpan(void) const
{
	if (this->index < 2)
		throw Span::PochiElementi();
	int max = *std::max_element(this->array.begin(), this->array.end());
	int min = *std::min_element(this->array.begin(), this->array.end());
	return max - min;
}

void Span::stampa(void) const
{
	if (this->index == 0)
		std::cout << "Array vuoto";
	else
	{
		std::cout << "Array: [";
		for (unsigned int i = 0; i < this->index; i++)
		{
			std::cout << this->array[i];
			if (i != this->index - 1)
				std::cout << ", ";
		}
		std::cout << "]";
	}
	std::cout << std::endl;
}
