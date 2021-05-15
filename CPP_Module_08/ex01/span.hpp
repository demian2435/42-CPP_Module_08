/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 10:40:00 by dmalori           #+#    #+#             */
/*   Updated: 2021/05/15 10:40:25 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <exception>
#include <vector>

class Span
{
	private:
		unsigned int N;
		std::vector<int> array;
		unsigned int index;
		/* Default Constructor */
		Span() {}
	public:
		/* Constructor */
		Span(unsigned int _N);
		Span(unsigned int _N, bool _random);
		/* Destructor */
		~Span();
		/* Copy Constructor */
		Span(const Span &other);
        /* Operation overload = */
		Span &operator = (const Span &other);
		/* Other */
		void addNumber(int _n);
		int shortestSpan(void) const;
		int longestSpan(void) const;
		void stampa(void) const;
		/* Exception */
		class SpanPieno : public std::exception
		{
			public:
			const char * what () const throw ()
			{
				return "Span pieno";
			}
		};
		class PochiElementi : public std::exception
		{
			public:
			const char * what () const throw ()
			{
				return "Non ci sono abbastanza elementi per la funzione";
			}
		};
};
