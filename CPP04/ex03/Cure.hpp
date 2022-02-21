/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 23:19:48 by bmangin           #+#    #+#             */
/*   Updated: 2022/02/17 23:39:41 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		Cure(Cure const& src);
		~Cure();
		
		Cure&		operator=(Cure const& rhs);
		
		AMateria*	clone() const;
		void		use(ICharacter& target);

};

std::ostream&		operator<<(std::ostream& ofs, Cure const& inst);
