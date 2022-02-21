/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 00:00:36 by bmangin           #+#    #+#             */
/*   Updated: 2022/02/18 12:29:40 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <vector>

class NotFound : public std::exception
{
	public:
		virtual const char	*what() const throw()
		{
			return ("Error: can't be found!");
		}
};

template<typename T>
int	easyfind(T elem, int nb)
{
	typename T::iterator	it;
	
	it = find(elem.begin(), elem.end(), nb);
	if (it == elem.end())
		throw NotFound();
	return *it;	
}

// template<typename T>
// int	easyfind(T elem, int nb)
// {
	// typename T::iterator	it = elem.begin();
	// typename T::iterator	it_end = elem.end();
// 
	// while (it != it_end)
	// {
		// if (*it == nb)
			// return *it;
		// ++it;
	// }
	// throw NotFound();
	// return nb;
// }
