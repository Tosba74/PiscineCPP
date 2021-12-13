/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 18:06:51 by bmangin           #+#    #+#             */
/*   Updated: 2021/12/10 12:24:56by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/Contact.hpp"

Contact::Contact(void)
{
	std::cout << "Contact constructor called" << std::endl;
	return ;
}

Contact::~Contact(void)
{
	std::cout << "Contact destructor called" << std::endl;
	return ;
}

void 		Contact::setFirstName(void)
{
	std::cout << "\e[36mEnter First name: \e[0m";
	std::getline(std::cin, this->_FirstName);
	std::cout << std::endl;
	return ;
}

void 		Contact::setLastName(void)
{
	std::cout << "\e[36mEnter Last name: \e[0m";
	std::getline(std::cin, this->_LastName);
	std::cout << std::endl;
	return ;
}

void 		Contact::setNickName(void)
{
	std::cout << "\e[36mEnter Nick name: \e[0m";
	std::getline(std::cin, this->_NickName);
	std::cout << std::endl;
	return ;
}

void 		Contact::setPhone(void)
{
	std::cout << "\e[36mEnter Phone number: \e[0m";
	std::getline(std::cin, this->_Phone);
	std::cout << std::endl;
	return ;
}

void 		Contact::setDarkestSecret(void)
{
	std::cout << "\e[36mEnter Darkest Secret: \e[0m";
	std::getline(std::cin, this->_DarkestSecret);
	std::cout << std::endl;
	return ;
}

std::string	Contact::getFirstName(){return(this->_FirstName);}
std::string	Contact::getLastName(){return(this->_LastName);}
std::string	Contact::getNickName(){return(this->_NickName);}
std::string	Contact::getPhone(){return(this->_Phone);}
std::string	Contact::getDarkestSecret(){return(this->_DarkestSecret);}

void		Contact::redim_str(std::string buf)
{
	int	len;
	std::string	str_tronc;

	len = buf.length();
	str_tronc = buf;
	if (len >= 10)
	{
		str_tronc[9] = '.';
		str_tronc.erase(10, len - 10);
	}
	while (len++ < 10)
		str_tronc.insert(0, " ");
	std::cout << str_tronc << "\e[94m|\e[0m";
}

void		Contact::print_con(int index)
{
	std::cout << "\e[94m|\e[0m         " << index << "\e[94m|\e[0m";
	this->redim_str(getFirstName());
	this->redim_str(getLastName());
	this->redim_str(getNickName());
	std::cout << std::endl;
	std::cout << "\e[94m -------------------------------------------\e[0m" << std::endl;
}
