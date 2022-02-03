/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 17:21:26 by bmangin           #+#    #+#             */
/*   Updated: 2022/01/21 18:38:53 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain	*_brain;
	
	protected:

	public:
		Cat(void);
		Cat(Cat const& copy);
		~Cat(void);
		
		void		makeSound(void) const;
		void		set_ideas(int index, std::string idea);
		std::string	get_idea(int index) const;
		void		get_ideas(void) const;
		Cat&		operator=(Cat const& rhs);
		
};

std::ostream&		operator<<(std::ostream& ofs, Cat const& rhs);
