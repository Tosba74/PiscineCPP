/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 22:32:55 by bmangin           #+#    #+#             */
/*   Updated: 2022/01/15 10:59:16 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
	private:

	protected:

	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap const &src);
		~FragTrap(void);

		FragTrap&	operator=(FragTrap const &rhs);

		void		highFivesGuys(void);
};

std::ostream&		operator<<(std::ostream& ofs, FragTrap const& inst);