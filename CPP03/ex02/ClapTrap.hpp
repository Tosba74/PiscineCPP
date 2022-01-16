/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 16:45:57 by bmangin           #+#    #+#             */
/*   Updated: 2022/01/12 19:02:05 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class ClapTrap
{
	private:
		std::string		_name;
		int				_hitPoints;
		int				_energy;
		int				_attack;

	protected:
		std::string		type;
		int				maxHitPoints;
		int				maxEnergy;
		int				maxAttack;

	public:
		ClapTrap();
		ClapTrap(std::string);
		ClapTrap(ClapTrap const& cpy);
		~ClapTrap();
	
		std::string		getName() const;
		int				getHitPoints() const;
		int				getEnergy() const;
		int				getAttack() const;
		void			setName(std::string name);
		void			setHitPoints(int maxHitPoints);
		void			setEnergy(int maxEnergy);
		void			setAttack(int maxAttack);
		ClapTrap&		operator=(ClapTrap const& rhs);
		
		void			attack(std::string const & target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
};

std::ostream&			operator<<(std::ostream& ofs, ClapTrap const& inst);
