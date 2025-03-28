/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvacca <anvacca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 12:32:48 by anvacca           #+#    #+#             */
/*   Updated: 2025/03/19 11:36:02 by anvacca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"


#define TOTAL	10
#define HALF	TOTAL / 2

int main()
{
	const Animal	*(metaArray[TOTAL]);

	std::cout << "Creating " << HALF << " Dogs" << std::endl;
	for (unsigned int i = 0; i < HALF; i++)
		metaArray[i] = new Dog();

	std::cout << "Creating " << HALF << " Dogs" << std::endl;
	for (unsigned int i = HALF; i < TOTAL; i++)
		metaArray[i] = new Cat();

	std::cout << "Deleting " << TOTAL << " Animals" << std::endl;
	for (unsigned int i = 0; i < TOTAL; i++)
		delete metaArray[i];

	return (0);
}
