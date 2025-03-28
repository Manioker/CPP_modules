/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvacca <anvacca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 12:32:48 by anvacca           #+#    #+#             */
/*   Updated: 2025/03/14 14:09:56 by anvacca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	std::cout << "========= With  Virtual =========" << std::endl;
	std::cout << "Initializing Animal class:" << std::endl;
	const Animal	*meta = new Animal();
	std::cout << "Initializing Dog class:" << std::endl;
	const Animal	*dog = new Dog();
	std::cout << "Initializing Cat class:" << std::endl;
	const Animal	*cat = new Cat();

	meta->makeSound();
	dog->makeSound();
	cat->makeSound();

	std::cout << "Deleting Cat class:" << std::endl;
	delete cat;
	std::cout << "Deleting Dog class:" << std::endl;
	delete dog;
	std::cout << "Deleting Animal class:" << std::endl;
	delete meta;


	std::cout << std::endl << "======== Without Virtual ========" << std::endl;
	std::cout << "Initializing WrongAnimal class:" << std::endl;
	const WrongAnimal	*wrongMeta = new WrongAnimal();
	std::cout << "Initializing WrongCat class:" << std::endl;
	const WrongAnimal	*wrongCat = new WrongCat();

	wrongMeta->makeSound();
	wrongCat->makeSound();

	std::cout << "Deleting WrongCat class:" << std::endl;
	delete wrongCat;
	std::cout << "Deleting WrongAnimal class:" << std::endl;
	delete wrongMeta;

	return (0);
}
