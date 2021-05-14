#include <iostream>
#include "mutantstack.hpp"
#include <list>

int main (void)
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	std::stack<int> s(mstack);
	std::cout << s.size() << std::endl;

	MutantStack<int> m;
	m.push(10);
	m.push(50);
	m.push(123);

	/* AVANTI */
	for (MutantStack<int>::iterator i = m.begin(); i != m.end(); i++)
	{
		std::cout << *i << " ";
	}
	std::cout << std::endl;
	/* INDIETRO */
	for (MutantStack<int>::reverse_iterator i = m.rbegin(); i != m.rend(); i++)
	{
		std::cout << *i << " ";
	}
	std::cout << std::endl;

	return (0);
}
