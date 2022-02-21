/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 17:49:29 by bmangin           #+#    #+#             */
/*   Updated: 2022/02/16 17:06:53 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Dog : public Animal
{
	private:
		Brain	*_brain;
	
	protected:

	public:
		Dog(void);
		Dog(std::string type);
		Dog(Dog const& copy);
		~Dog(void);
		
		void		makeSound(void) const;
		Dog&		operator=(Dog const& rhs);
		Brain&		getBrain(void) const;
};

std::ostream&		operator<<(std::ostream& ofs, Dog const& rhs);
