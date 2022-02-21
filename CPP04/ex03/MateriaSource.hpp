/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 23:40:34 by bmangin           #+#    #+#             */
/*   Updated: 2022/02/17 23:43:50 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{

	public:
		AMateria* 		src[4];

		MateriaSource();
		MateriaSource(MateriaSource const& src );
		~MateriaSource();
		
		MateriaSource&	operator=(MateriaSource const& rhs);
		
		void			learnMateria(AMateria* mate);
		AMateria*		createMateria(std::string const& type);
		std::string		get_src(int i) const ;

};

std::ostream &			operator<<(std::ostream& ofs, MateriaSource const& inst);
