/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 16:27:02 by bmangin           #+#    #+#             */
/*   Updated: 2022/02/16 16:12:23 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Brain.hpp"

class Animal
{
	private:
	
	protected:
		std::string			type;

	public:
		Animal(void);
		Animal(std::string type);
		Animal(Animal const& copy);
		virtual ~Animal(void);
		
		virtual void		makeSound(void) const;
		std::string			getType(void) const;
		Animal&				operator=(Animal const& rhs);
		
};

std::ostream&				operator<<(std::ostream& ofs, Animal const& rhs);
