/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Aanimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 16:27:02 by bmangin           #+#    #+#             */
/*   Updated: 2022/01/21 23:51:46 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Aanimal
{
	private:
	
	protected:
		std::string	type;

	public:
		Aanimal(void);
		Aanimal(Aanimal const& copy);
		virtual ~Aanimal(void);
		
		virtual void		makeSound(void) const;
		std::string			getType(void) const;
		Aanimal&			operator=(Aanimal const& rhs);
		
};

std::ostream&		operator<<(std::ostream& ofs, Aanimal const& rhs);
