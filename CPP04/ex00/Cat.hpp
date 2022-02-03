/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 17:21:26 by bmangin           #+#    #+#             */
/*   Updated: 2022/01/16 18:58:06 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Cat : public Animal
{
	private:
	
	protected:

	public:
		Cat(void);
		Cat(Cat const& copy);
		~Cat(void);
		
		void		makeSound(void) const;
		Cat&		operator=(Cat const& rhs);
		
};

std::ostream&		operator<<(std::ostream& ofs, Cat const& rhs);
