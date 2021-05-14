#pragma once
# include <exception>

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
	typename T::iterator i;
	for (i = data.begin(); i != data.end(); i++)
		if (*i == n)
		{
			std::cout << "Elemento trovato" << std::endl;
			return ;
		}
	throw ElementoNonTrovato();
}
