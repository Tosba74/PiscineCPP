/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 16:27:02 by bmangin           #+#    #+#             */
/*   Updated: 2022/01/16 20:10:28 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Animal
{
	private:
	
	protected:
		std::string	type;

	public:
		Animal(void);
		Animal(Animal const& copy);
		virtual ~Animal(void);
		
		virtual void		makeSound(void) const;
		std::string			getType(void) const;
		Animal&				operator=(Animal const& rhs);
		
};

std::ostream&		operator<<(std::ostream& ofs, Animal const& rhs);
