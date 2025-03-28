/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvacca <anvacca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 12:32:48 by anvacca           #+#    #+#             */
/*   Updated: 2025/03/19 11:46:29 by anvacca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#define TOTAL	10
#define HALF	TOTAL / 2

int main()
{
	//const AAnimal	error;
	const Cat	cat;
	const Dog	dog;

	cat.makeSound();
	dog.makeSound();

	return (0);
}
