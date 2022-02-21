/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 18:20:50 by bmangin           #+#    #+#             */
/*   Updated: 2022/02/21 13:44:39 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

typedef struct	s_data
{
	int			value;
}				Data;

uintptr_t	serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*		deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}
int main(void)
{
	Data		*new_data;
	Data		*data;
	uintptr_t	seria;

	new_data = NULL;
	data = new Data;
	data->value = 42;
	seria = serialize(data);
	new_data = deserialize(seria);
	std::cout << "data adress = " << data << std::endl;
	std::cout << "new data value = " << new_data << std::endl;

	delete data;
	
	return 0;
}
