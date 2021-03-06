/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 10:40:08 by dmalori           #+#    #+#             */
/*   Updated: 2021/05/15 10:41:53 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <stack>
#include <deque>

template <typename T, typename Container = std::deque<T> > class MutantStack : public std::stack<T, Container>
{
	public:
		/* Default Constructor */
		MutantStack() : std::stack<T, Container>() {}
		/* Destructor */
		virtual ~MutantStack() {}
		/* Copy Constructor */
		MutantStack(MutantStack const& other) : std::stack<T, Container>(other) {}
		/* Operator overload = */
		MutantStack& operator=(MutantStack const& other)
		{
			if (this != &other) {
				std::stack<T, Container>::operator=(other);
			}
			return (*this);
		}
		/* Other */
		typedef typename std::stack<T, Container>::container_type container_type;
		typedef typename container_type::iterator iterator;
		typedef typename container_type::const_iterator const_iterator;
		typedef typename container_type::reverse_iterator reverse_iterator;
		typedef typename container_type::const_reverse_iterator const_reverse_iterator;
		iterator begin()
		{
			return this->c.begin();
		}
		iterator end()
		{
			return this->c.end();
		}
		reverse_iterator rbegin()
		{
			return this->c.rbegin();
		}
		reverse_iterator rend()
		{
			return this->c.rend();
		}
};
