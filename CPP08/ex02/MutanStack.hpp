/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutanStack.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 00:00:36 by bmangin           #+#    #+#             */
/*   Updated: 2022/02/21 13:51:55 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <stack>
# include <iostream>

template <typename T>
class MutantStack : public std::stack<T> {
	public:
		typedef typename	std::stack<T>::container_type::iterator iterator;
		iterator			begin(void) {return std::stack<T>::c.begin();};
		iterator			end(void) {return std::stack<T>::c.end();};
};