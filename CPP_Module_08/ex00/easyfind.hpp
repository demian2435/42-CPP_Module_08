#pragma once
#include <exception>
#include <algorithm>

class ElementoNonTrovato: public std::exception
{
	public:
		const char *what() const throw()
		{
			return ("Elemento non trovato");
		}
};

template <typename T> void easyfind (T &data, int n)
{
	if (std::find(data.begin(), data.end(), n) != data.end())
		std::cout << "Elemento trovato" << std::endl;
	else
		throw ElementoNonTrovato();
}
