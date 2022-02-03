/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 20:21:57 by bmangin           #+#    #+#             */
/*   Updated: 2021/12/27 17:12:13 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Karen
{
	private:
		void			debug(void);
		void			info(void);
		void			warning(void);
		void			error(void);

	public:
		Karen();
		~Karen();
		void			complain(std::string level);
};
