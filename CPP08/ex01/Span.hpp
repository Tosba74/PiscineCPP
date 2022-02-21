/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 00:00:36 by bmangin           #+#    #+#             */
/*   Updated: 2022/02/18 15:09:25 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <vector>

class Span
{
	private:
		unsigned int		_size;
		std::vector<int>	_stack;
		
	public:
	
		Span();
		Span(unsigned int n);
		Span(Span const& cpy);
		~Span();

		Span&				operator=(Span const& rhs);
		int					operator[](unsigned int n) const;
		unsigned int		getSize() const;
		std::vector<int>	getVector() const;

		void				addNumber(int n);
		unsigned int		shortestSpan();
		unsigned int		longestSpan();

		class FullStack: public std::exception
		{
			virtual const char	*what() const throw()
			{
				return ("Error: stack is full!");
			}
		};
		class OutOfRange: public std::exception
		{
			virtual const char	*what() const throw()
			{
				return ("Error: range is invalid!");
			}
		};
		class ImpossibleSpan: public std::exception
		{
			virtual const char	*what() const throw()
			{
				return ("Error: Impossible to get a span!");
			}
		};


};

std::ostream&						operator<<(std::ostream& ofs, Span const& inst);
