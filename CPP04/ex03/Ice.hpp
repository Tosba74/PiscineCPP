/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 23:19:27 by bmangin           #+#    #+#             */
/*   Updated: 2022/02/17 23:39:19 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		Ice( Ice const & src );
		~Ice();
		
		AMateria*	clone() const;
		void		use(ICharacter & target);
		Ice &		operator=( Ice const & rhs );

};

std::ostream&		operator<<(std::ostream& ofs, Ice const& inst);
