/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 17:49:29 by bmangin           #+#    #+#             */
/*   Updated: 2022/02/15 15:44:22 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Dog : public Animal
{
	private:
	
	protected:

	public:
		Dog(void);
		Dog(std::string type);
		Dog(Dog const& copy);
		~Dog(void);
		
		void		makeSound(void) const;
		Dog&		operator=(Dog const& rhs);
		
};

std::ostream&		operator<<(std::ostream& ofs, Dog const& rhs);
