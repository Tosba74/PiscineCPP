/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 17:21:26 by bmangin           #+#    #+#             */
/*   Updated: 2022/02/16 18:45:05 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Cat : public Animal
{
	private:
		Brain		*_brain;

	protected:

	public:
		Cat(void);
		Cat(std::string type);
		Cat(Cat const& copy);
		~Cat(void);
		
		void		makeSound(void) const;
		Cat&		operator=(Cat const& rhs);
		Brain&		getBrain(void) const;
};

std::ostream&		operator<<(std::ostream& ofs, Cat const& rhs);
