/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 22:01:01 by bmangin           #+#    #+#             */
/*   Updated: 2022/01/21 18:05:29 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Brain
{
	private:
		std::string	ideas[100];
	
	public:
		Brain();
		Brain(Brain const& rhs);
		~Brain();

		std::string	get_idea(int index) const;
		void		get_ideas(void) const;
		void		set_ideas(int index, std::string idea);
	
};
