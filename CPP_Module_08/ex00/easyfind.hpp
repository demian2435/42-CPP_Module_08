/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 10:39:49 by dmalori           #+#    #+#             */
/*   Updated: 2021/05/15 10:44:44 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
