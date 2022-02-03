/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 21:45:17 by bmangin           #+#    #+#             */
/*   Updated: 2022/01/06 09:40:34 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0)
{
	// std::cout << "Default constructor called" << std::endl;
	return ;
}
Fixed::Fixed(const int nb) : _value(nb << _bits)
{
	// std::cout << "Int constructor called" << std::endl;
	return ;
}
Fixed::Fixed(const float nb) : _value((int)(roundf(nb * (1 << _bits))))
{
	// std::cout << "Float constructor called" << std::endl;
	return ;
}
Fixed::Fixed(Fixed const& cpy)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = cpy;
	return ;
}
Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed&					Fixed::operator=( Fixed const & rhs)
{
	
	// std::cout << "Assignation operator called" << std::endl;
	if (this != &rhs)
		this->_value = rhs._value;
	return *this;
}
Fixed					Fixed::operator+(Fixed const & rhs)
{
	_value += rhs._value;
	return *this;
}
Fixed					Fixed::operator-(Fixed const & rhs)
{
	_value -= rhs._value;
	return *this;
}
Fixed					Fixed::operator*(Fixed const & rhs)
{
	_value *= rhs._value >> _bits;
	return *this;
}
Fixed					Fixed::operator/(Fixed const & rhs)
{
	_value /= rhs._value >> _bits;
	return *this;
}
Fixed&					Fixed::operator++()
{
	this->_value++;
	return *this;
}
Fixed&					Fixed::operator--()
{
	_value -= 1 >> _bits;
	return *this;
}
Fixed  					Fixed::operator++(int)
{
	Fixed	ret;

	ret = *this;
	++*this;
	return ret;
}
Fixed  					Fixed::operator--(int)
{
	Fixed	ret;
	
	ret = this->operator--();
	return ret;
}

bool					Fixed::operator<( Fixed const & rhs) const
{
	if (this->_value < rhs._value)
		return true;
	return false;
}
bool					Fixed::operator>( Fixed const & rhs) const
{
	if (this->_value > rhs._value)
		return true;
	return false;
}
bool					Fixed::operator<=( Fixed const & rhs) const
{
	if (this->_value <= rhs._value)
		return true;
	return false;
}
bool					Fixed::operator>=( Fixed const & rhs) const
{
	if (this->_value >= rhs._value)
		return true;
	return false;
}
bool					Fixed::operator==( Fixed const & rhs)  const
{
	if (this->_value == rhs._value)
		return true;
	return false;
}
bool					Fixed::operator!=( Fixed const & rhs)  const
{
	if (this->_value != rhs._value)
		return true;
	return false;
}

const int&			Fixed::operatormax(Fixed& lhs, Fixed& rhs)
{
	if (lhs > rhs)
		return lhs._value;
	return rhs._value;		
}
const int&			Fixed::operatormin(Fixed& lhs, Fixed& rhs)
{
	if (lhs < rhs)
		return lhs._value;
	return rhs._value;
}
const Fixed&	Fixed::max(const Fixed& lhs, const Fixed& rhs)
{
	if (lhs > rhs)
		return lhs;
	return rhs;		
}
const Fixed&	Fixed::min(const Fixed& lhs, const Fixed& rhs)
{
	if (lhs < rhs)
		return lhs;
	return rhs;		
}

void					Fixed::setRawBits(int const raw)
{
   this->_value = raw;
}
int						Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}
float					Fixed::toFloat(void) const
{
	return ((float)(_value/roundf(1 << _bits)));
}
int						Fixed::toInt(void) const
{
	return (_value >> _bits);	
}

std::ostream &			operator<<(std::ostream & ofs, Fixed const & rhs)
{
	ofs << rhs.toFloat();
	return ofs;
}
