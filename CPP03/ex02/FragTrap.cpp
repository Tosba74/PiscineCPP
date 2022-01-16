/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 22:36:25 by bmangin           #+#    #+#             */
/*   Updated: 2022/01/12 22:53:28 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("Pierre")
{
	this->setName("Pierre");
	this->type = "FragTrap";
	this->maxHitPoints = 100;
	this->maxEnergy = 100;
	this->maxAttack = 30;
	this->setHitPoints(maxHitPoints);
	this->setEnergy(maxEnergy);
	this->setAttack(maxAttack);
	std::cout << this->type << " " << this->getName() << " Constructed Default" << std::endl;
	return ;
}
FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->type = "FragTrap";
	this->maxHitPoints = 100;
	this->maxEnergy = 100;
	this->maxAttack = 30;
	this->setHitPoints(maxHitPoints);
	this->setEnergy(maxEnergy);
	this->setAttack(maxAttack);
	std::cout << this->type << " " << this->getName() << " Constructed" << std::endl;
	return ;
}
FragTrap::FragTrap(FragTrap const& src)
{
	*this = src;
	std::cout << this->type << " " << this->getName() << " Copy Constructed" << std::endl;
}
FragTrap::~FragTrap()
{
	std::cout << this->type << " " << this->getName() << " is dead" << std::endl;
}


FragTrap&	FragTrap::operator=(FragTrap const &rhs)
{
	this->type = rhs.type;
	this->maxHitPoints = rhs.maxHitPoints;
	this->maxEnergy = rhs.maxEnergy;
	this->maxAttack = rhs.maxAttack;
	this->setName(rhs.getName());
	this->setHitPoints(rhs.getHitPoints());
	this->setEnergy(rhs.getEnergy());
	this->setAttack(rhs.getAttack());
	return *this;
}
void		FragTrap::highFivesGuys()
{
	std::cout << this->type << " " << this->getName() << " have enterred in Gate keeper mode." << std::endl;
}

std::ostream &			operator<<(std::ostream& ofs, FragTrap const& inst)
{
	ofs << "Name = " << inst.getName() << std::endl;
	ofs << "Hitpoint = " << inst.getHitPoints() << std::endl;
	ofs << "Energy point = " << inst.getEnergy() << std::endl;
	ofs << "Attack damage = " << inst.getAttack() << std::endl;
	return ofs;
}
