/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 23:15:05 by bmangin           #+#    #+#             */
/*   Updated: 2022/01/16 00:15:06 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
	private:
		std::string		_name;
	
	protected:
	
	public:
		DiamondTrap(void);
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap const &src);
		~DiamondTrap(void);

		DiamondTrap&	operator=(DiamondTrap const &rhs);
		std::string		getName(void) const;
		void			setName(std::string name);
		
		void			whoAmI(void);	
};

std::ostream&		operator<<(std::ostream& ofs, DiamondTrap const& inst);