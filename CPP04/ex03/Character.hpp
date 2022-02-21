/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 23:03:58 by bmangin           #+#    #+#             */
/*   Updated: 2022/02/17 23:23:59 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#pragma once

# include "ICharacter.hpp"

class Character: public ICharacter
{
	private:
		std::string			_name;
		AMateria* 			_items[4];
		
	public:

		Character();
		Character(std::string const & name);
		Character( Character const & src );
		~Character();

		Character&			operator=( Character const & rhs );
		std::string const&	getName() const;
		
		void				equip(AMateria* m);
		void				unequip(int idx);
		void				use(int idx, ICharacter& target);
		std::string			get_stock(int i) const;

};

std::ostream&				operator<<(std::ostream& ofs, Character const& inst);
