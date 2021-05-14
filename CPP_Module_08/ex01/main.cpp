#include "span.hpp"
#include <iostream>

int main (void)
{
	Span s1 = Span(10);
	s1.addNumber(-10);
	s1.addNumber(0);
	s1.addNumber(1);
	s1.addNumber(90);
	s1.stampa();
	std::cout << "SHORT: " << s1.shortestSpan() << std::endl;
	std::cout << "LONG: " << s1.longestSpan() << std::endl;
	return (0);
}
