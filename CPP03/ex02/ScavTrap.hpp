/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 16:21:44 by bmangin           #+#    #+#             */
/*   Updated: 2022/01/12 22:42:10 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	private:

	protected:

	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &src);
		~ScavTrap(void);

		ScavTrap&	operator=(ScavTrap const &rhs);

		void		guardGate(void);
};

std::ostream&		operator<<(std::ostream& ofs, ScavTrap const& inst);