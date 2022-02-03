/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 16:27:02 by bmangin           #+#    #+#             */
/*   Updated: 2022/01/16 20:28:13 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class WrongAnimal
{
	private:
	
	protected:
		std::string	type;

	public:
		WrongAnimal(void);
		WrongAnimal(WrongAnimal const& copy);
		~WrongAnimal(void);
		
		void				makeSound(void) const;
		std::string			getType(void) const;
		WrongAnimal&				operator=(WrongAnimal const& rhs);
		
};

std::ostream&		operator<<(std::ostream& ofs, WrongAnimal const& rhs);
