/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 18:12:36 by bmangin           #+#    #+#             */
/*   Updated: 2021/12/10 14:26:27 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <ctype.h>

class Contact
{
	private:
		std::string _FirstName;
		std::string _LastName;
		std::string _NickName;
		std::string _Phone;
		std::string _DarkestSecret;
	
	public:
		Contact();
		~Contact();
		
	void		print_con(int index);
	void		redim_str(std::string buf);
	void		setFirstName();
	void		setLastName();
	void		setNickName();
	void		setPhone();
	void		setDarkestSecret();
	std::string	getFirstName();
	std::string	getLastName();
	std::string	getNickName();
	std::string	getPhone();
	std::string	getDarkestSecret();
};
