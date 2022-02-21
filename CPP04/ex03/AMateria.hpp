/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 23:14:23 by bmangin           #+#    #+#             */
/*   Updated: 2022/02/17 23:33:07 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>

# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string			type;

	public:
		AMateria();
		AMateria(std::string const & type);
		AMateria( AMateria const & src );
		virtual ~AMateria();
		
		AMateria&			operator=(AMateria const& rhs );
		std::string const&	getType() const;

		virtual void		use(ICharacter & target);
		virtual AMateria*	clone() const = 0;

};

std::ostream &				operator<<(std::ostream& ofs, AMateria const & rhs);
