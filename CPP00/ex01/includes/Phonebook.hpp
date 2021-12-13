/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 21:30:58 by bmangin           #+#    #+#             */
/*   Updated: 2021/12/10 16:30:35 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Contact.hpp"

#define CAPACITY 8

class Phonebook
{
	private:
	public:
		Phonebook();
		~Phonebook();
	Contact	contact[CAPACITY];
		void	add(int *nb_contacts, int *index_contact);
		void	search(int nb_contact);
		void	print_book(int nb_contact);
		void    loop();
};

