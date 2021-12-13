/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 11:27:55 by bmangin           #+#    #+#             */
/*   Updated: 2021/12/10 17:20:31by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/Phonebook.hpp"

Phonebook::Phonebook(void)
{
	std::cout << "Phonebook created" << std::endl;
	return ;
}
Phonebook::~Phonebook(void)
{
	std::cout << "Phonebook deleted" << std::endl;
	return ;
}

void	Phonebook::add(int *nb_contact, int *index_contact)
{
	Contact		new_contact;

	if (*nb_contact < CAPACITY)
	{
		new_contact.setFirstName();
		new_contact.setLastName();
		new_contact.setNickName();
		new_contact.setPhone();
		new_contact.setDarkestSecret();
		this->contact[*index_contact] = new_contact;
		(*index_contact)++;
		*nb_contact = *index_contact;
	}
}

void	Phonebook::print_book(int nb_contact)
{
	int	i = 0;

	std::cout << "\e[32mHere is your contact list:" << std::endl << std::endl;
	std::cout << "\e[94m|\e[34m   Index  \e[94m|\e[34mFirst Name\e[94m|\e[0m";
	std::cout << "\e[34m LastName \e[94m|\e[34m Nickname \e[94m|\e[0m" << std::endl;
	std::cout << "\e[94m -------------------------------------------\e[0m" << std::endl;
	for (i = 0; i < nb_contact; i++)
	{
		this->contact[i].print_con(i);
		// i++;
	}
}

void	Phonebook::search(int nb_contact)
{
	std::string index;
	
	if (nb_contact == 0)
		std::cout << "\e[31mYou currently have no contact ... Now exiting search and returning to menu ...\e[0m" << std::endl;
	else
	{
		this->print_book(nb_contact);
		while (1)
		{
			std::cout << "\e[32mPlease chose your contact by typing its index (or QUIT to quit the searching mode): \e[0m";
			// std::cin >> index;
			std::getline(std::cin, index);
			if (!index.compare("QUIT"))
					break ;
			else if (index.size() == 1 && isdigit(index[0]))
			{
				// if (index.size() > 1 || index[0] - 48 < nb_contact - 1 || index[0] - 48 < 0)
				if (index[0] - 48 >= 0 && index[0] - 48 < nb_contact)
					this->contact[index[0] - 48].print_con(index[0] - 48);
				else
					std::cout << "\e[31mThe index you entered is invalid ... Please try again ...\e[0m" << std::endl;
			}
		}
	}
}

void	Phonebook::loop(void)
{
	std::string	buff;
	int			nb_contact;
	int			index_contact;

	nb_contact = 0;
	index_contact = 0;
	while (1)
	{
		std::cout << "\e[32mPlease enter a command (ADD, SEARCH or EXIT)\e[0m" << std::endl;
		std::cout << "nb_contact: " << nb_contact << " index_contact: " << index_contact << std::endl;
		std::getline(std::cin, buff);
		if (!buff.compare("ADD"))
		{
			if (nb_contact < CAPACITY)
				this->add(&nb_contact, &index_contact);
			else
				std::cout << "\e[91mThe phonebook is full ... Please try again later ...\e[0m" << std::endl;
		}
		else if (!buff.compare("SEARCH"))
			this->search(nb_contact);
		else if (!buff.compare("EXIT"))
		{
			std::cout << "\e[91mPhonebook closed\e[0m" << std::endl;
			return ;
		}
	}
}
