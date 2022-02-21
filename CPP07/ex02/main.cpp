/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmangin <bmangin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 11:50:01 by bmangin           #+#    #+#             */
/*   Updated: 2022/02/18 00:17:38 by bmangin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <stdlib.h>

#define MAX_VAL 15

std::ostream&    getArray(std::ostream& ofs, int *array)
{
    ofs << "{ ";
    for (int i = 0; i < MAX_VAL; i++)
    {
        ofs << array[i];
        if (i != MAX_VAL - 1)
            ofs << ", ";
    }
    ofs << " }";
    return ofs;    
}
int main(void)
{
	Array<int>      numbers(MAX_VAL);
	Array<float>    numbers2(MAX_VAL);
	Array<int>      copy(numbers);
	int             array[MAX_VAL];
	
    srand(time(NULL));
    try
    {
        for (unsigned int i = 0; i < MAX_VAL; i++)
        {
            array[i] = rand() % 100;
            numbers.setArray(i, array[i]);
            numbers2.setArray(i, array[i]);
        }
        std::cout << "{ ";
        for (int i = 0; i < MAX_VAL; i++)
        {
            std::cout << array[i];
            if (i != MAX_VAL - 1)
                std::cout << ", ";
        }
        std::cout << " }";
        std::cout << std::endl;
        std::cout << "{ ";
        for (unsigned int i = 0; i < MAX_VAL; i++)
        {
            std::cout << numbers[i];
            if (i != MAX_VAL - 1)
                std::cout << ", ";
        }
        std::cout << " }" << std::endl;
        std::cout << "{ ";
        for (unsigned int i = 0; i < MAX_VAL; i++)
        {
            std::cout << numbers2[i];
            if (i != MAX_VAL - 1)
                std::cout << ", ";
        }
        std::cout << " }" << std::endl;
        copy = numbers;
        copy = numbers;
        std::cout << copy << std::endl;
            // std::cout << numbers.operator[](i) << std::endl;
        // copy.operator=(numbers);
        // std::cout << &copy << std::endl;
    	// std::cout << numbers.getSize() << std::endl;
    	// std::cout << numbers2.getSize() << std::endl;
    	// std::cout << copy.getSize() << std::endl;
    	// std::cout << copy2.getSize() << std::endl;
        // copy2.operator=(numbers);
    	// std::cout << "ahahhaahah" << std::endl;
    	// std::cout << copy2.getSize() << std::endl;
        // std::cout << "Index 1 to copy 2: " << copy2.operator[](1) << std::endl;
        // std::cout << "Index 7 to copy 2: " << copy2.operator[](7) << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
	
	return 0;
}






// int main(void)
// {
//     Array<int> numbers(MAX_VAL);
// 	for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (numbers[i] != 0)
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
// 	Array<int> copy = numbers;
// 	Array<int> copy2(numbers);
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
// 		if (mirror[i] != copy[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
// 		if (mirror[i] != copy2[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << " numbers[-2] invalid" << std::endl;
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << " numbers[MAX_VAL] invalid" << std::endl;
//     }
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         mirror[i] += 1;
//     }
// 	for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] - 1 != numbers[i])
//         {
//             std::cerr << "The copy is not deep !" << std::endl;
//             return 1;
//         }
//     }
// 	for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] - 1 != copy[i])
//         {
//             std::cerr << "The copy is not deep !" << std::endl;
//             return 1;
//         }
//     }
// 	for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] - 1 != copy2[i])
//         {
//             std::cerr << "The copy is not deep !" << std::endl;
//             return 1;
//         }
//     }
// 	if (numbers.getSize() != MAX_VAL)
// 	{
// 		{
//             std::cerr << "Size is not correct !" << std::endl;
//             return 1;
//         }
// 	}
// 	if (copy.getSize() != MAX_VAL)
// 	{
// 		{
//             std::cerr << "Size is not correct !" << std::endl;
//             return 1;
//         }
// 	}
// 	if (copy2.getSize() != MAX_VAL)
// 	{
// 		{
//             std::cerr << "Size is not correct !" << std::endl;
//             return 1;
//         }
// 	}
//     delete [] mirror;
//     return 0;
// }

// int main(void)
// {
    // Array<int>	numbers(MAX_VAL);
    // int			*mirror = new int[MAX_VAL];
	// 
    // srand(time(NULL));
    // for (int i = 0; i < MAX_VAL; i++)
    // {
        // const int value = rand();
        // numbers[i] = value;
        // mirror[i] = value;
    // }
    // std::cout << numbers << std::endl;
    // SCOPE
    // {
        // Array<int> tmp = numbers;
        // Array<int> test(tmp);
// 
        // for (int i = 0; i < MAX_VAL; i++)
    // {
        // if (mirror[i] == numbers[i])
            // std::cout <<"mirror[" << i << "] = "<< mirror[i] << std::endl;
// 
        // else if (mirror[i] != numbers[i])
        // {
            // std::cerr << "didn't save the same value!!" << std::endl;
            // return 1;
        // }
    // }
    // }
// 
    // for (int i = 0; i < MAX_VAL; i++)
    // {
        // if (mirror[i] != numbers[i])
        // {
            // std::cerr << "didn't save the same value!!" << std::endl;
            // return 1;
        // }
    // }
    // try
    // {
        // numbers[-2] = 0;
    // }
    // catch(const std::exception& e)
    // {
        // std::cerr << e.what() << '\n';
    // }
    // try
    // {
        // numbers[MAX_VAL] = 0;
    // }
    // catch(const std::exception& e)
    // {
        // std::cerr << e.what() << '\n';
    // }
// 
    // for (int i = 0; i < MAX_VAL; i++)
    // {
        // numbers[i] = rand();
    // }
    // std::cout << numbers << std::endl;
    // delete [] mirror;//
    // return 0;
// }
