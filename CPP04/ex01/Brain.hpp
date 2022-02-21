/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 14:53:35 by bmangin           #+#    #+#             */
/*   Updated: 2022/02/16 16:13:22 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Brain
{
	private:
	
	protected:
		std::string	ideas[100];

	public:
		Brain();
		Brain(std::string idea);
		Brain(Brain const& copy);
		~Brain();

		Brain&		operator=(Brain const& rhs);
		std::string	getIdea(int index) const;
		void		setIdea(int index, std::string idea);
};

std::ostream&		operator<<(std::ostream& ofs, Brain const& inst);
		