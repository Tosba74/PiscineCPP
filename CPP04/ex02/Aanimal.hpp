/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Aanimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 16:27:02 by bmangin           #+#    #+#             */
/*   Updated: 2022/02/16 16:12:23 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Brain.hpp"

class Aanimal
{
	private:
	
	protected:
		std::string			type;

	public:
		Aanimal(void);
		Aanimal(std::string type);
		Aanimal(Aanimal const& copy);
		virtual ~Aanimal(void);
		
		virtual void		makeSound(void) const = 0;
		std::string			getType(void) const;
		Aanimal&				operator=(Aanimal const& rhs);
		
};

std::ostream&				operator<<(std::ostream& ofs, Aanimal const& rhs);
