/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 17:49:29 by bmangin           #+#    #+#             */
/*   Updated: 2022/01/21 23:48:26 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Aanimal.hpp"
#include "Brain.hpp"

class Dog : public Aanimal
{
	private:
		Brain	*_brain;
	
	protected:

	public:
		Dog(void);
		Dog(Dog const& copy);
		~Dog(void);
		
		void		makeSound(void) const;
		void		set_ideas(int i, std::string idea);
		std::string	get_idea(int i) const;
		void		get_ideas(void) const;
		Dog&		operator=(Dog const& rhs);
		
};

std::ostream&		operator<<(std::ostream& ofs, Dog const& rhs);
