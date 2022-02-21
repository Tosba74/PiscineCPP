/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 23:46:16 by bmangin           #+#    #+#             */
/*   Updated: 2022/02/17 23:46:20 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for(int i = 0; i < 4 ; i++)
		this->src[i] = NULL;
}
MateriaSource::MateriaSource( const MateriaSource & src )
{
	for(int i = 0; i < 4 ; i++)
		this->src[i] = src.src[i];
}
MateriaSource::~MateriaSource()
{
}

MateriaSource&	MateriaSource::operator=( MateriaSource const & rhs )
{
	if(this != &rhs)
	{
		for(int i = 0; i < 4 ; i++)
			this->src[i] = rhs.src[i];
	}
	return *this;
}

void			MateriaSource::learnMateria(AMateria* meteria)
{
	if(meteria != NULL)
	{
		for(int i = 0 ; i < 4 ; i++)
		{
			if(this->src[i] == NULL)
			{
				this->src[i] = meteria;
				break;
			}
		}
	}
}

AMateria*		MateriaSource::createMateria(std::string const & type)
{
	for(int i = 0 ; i < 4; i++)
	{
		if(this->src[i]->getType() == type)
			return(this->src[i]->clone());
	}
	return(NULL);

}

std::string		MateriaSource::get_src(int i) const
{
	return this->src[i]->getType();
}

std::ostream&	operator<<( std::ostream & o, MateriaSource const & rhs )
{
	for(int i = 0; i < 4 ;i++)
	{
		o << "Materia[" << i <<"] = " << rhs.get_src(i);
	}
	return o;
}