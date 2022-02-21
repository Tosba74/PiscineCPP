/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 00:00:36 by bmangin           #+#    #+#             */
/*   Updated: 2022/02/18 23:01:57 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _size(0)
{
}
Span::Span(unsigned int n) : _size(n)
{
}
Span::Span(Span const& cpy)
{
	*this = cpy;
}
Span::~Span()
{
}

Span&				Span::operator=(Span const& rhs)
{
	if (this != &rhs)
	{
		this->_size = rhs.getSize();
		this->_stack = rhs.getVector();
	}
	return *this;
}
int					Span::operator[](unsigned int n) const
{
	if (n < this->_size)
		return (this->_stack[n]);
	else
		throw Span::OutOfRange();
	return 0;
}
unsigned int		Span::getSize() const
{
	return this->_size;
}
std::vector<int>	Span::getVector() const
{
	return this->_stack;
}

void				Span::addNumber(int nb)
{
    if (this->getSize() == this->_stack.size())
        throw Span::FullStack();
    this->_stack.push_back(nb);
}

unsigned int		Span::shortestSpan()
{
    if (this->_stack.size() < 2)
        throw Span::ImpossibleSpan();
		
    std::vector<int>	sort = this->getVector();
    unsigned int		ret = INT_MAX;

    std::sort(sort.begin(), sort.end());
    for(unsigned int i = 0; i < sort.size() ; i++)
    {
         if (static_cast<unsigned int>(std::abs(sort[i + 1] - sort[i] )) < ret)
            ret = std::abs(sort[i + 1] - sort[i]);
    }
    return (ret);
}
unsigned int Span::longestSpan()
{
    if(_stack.size() < 2)
        throw Span::ImpossibleSpan();
		
    int min = static_cast<int>(*std::min_element(this->_stack.begin(), this->_stack.end()));
    int max = static_cast<int>(*std::max_element(this->_stack.begin(), this->_stack.end()));

    return(std::abs(max - min));
}

std::ostream&						operator<<(std::ostream& ofs, Span const& inst)
{
	ofs << "Span's size: " << inst.getSize() << std::endl;
	ofs << "Stack = { ";
    for (unsigned int n = 0; n < inst.getVector().size(); n++)
        ofs << inst[n] << ", ";
    ofs << "};" << std::endl;
	return ofs;
}
