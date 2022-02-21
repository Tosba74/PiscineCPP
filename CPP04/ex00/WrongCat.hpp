/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 17:21:26 by bmangin           #+#    #+#             */
/*   Updated: 2022/02/16 14:24:01 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	private:
	
	protected:

	public:
		WrongCat(void);
		WrongCat(std::string type);
		WrongCat(WrongCat const& copy);
		~WrongCat(void);
		
		void		makeSound(void) const;
		WrongCat&	operator=(WrongCat const& rhs);
		
};

std::ostream&		operator<<(std::ostream& ofs, WrongCat const& rhs);
