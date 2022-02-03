/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 18:51:02 by bmangin           #+#    #+#             */
/*   Updated: 2022/01/30 11:56:01 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

class Bureaucrat;

class PresidentialPardonForm : public AForm
{
	private:
		std::string				_target;
		
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm const& cpy);
		~PresidentialPardonForm();
	
		PresidentialPardonForm&	operator=(PresidentialPardonForm const& rhs);
		void					setTarget(std::string target);
		std::string				getTarget(void) const;
		void					execute(Bureaucrat const& executor) const;
	
};

std::ostream&					operator<<(std::ostream& ofs, PresidentialPardonForm const& inst);
