#include <iostream>
#include "easyfind.hpp"
#include <list>
#include <vector>

int main (void)
{
	try
	{
		std::list<int> lista;
		lista.push_back(2);
		easyfind(lista, 2);
		easyfind(lista, 10);
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::vector<int> vettore;
		vettore.push_back(12);
		vettore.push_back(14);
		easyfind(vettore, 12);
		easyfind(vettore, 123);
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
