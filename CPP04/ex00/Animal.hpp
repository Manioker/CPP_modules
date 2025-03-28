/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvacca <anvacca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 12:34:36 by anvacca           #+#    #+#             */
/*   Updated: 2025/03/14 13:54:53 by anvacca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
	public:
		Animal();
		Animal(const Animal &copy);
		Animal	&operator=(const Animal &other);
		virtual ~Animal();
		std::string	getType() const;
		virtual void	makeSound() const;

	protected:
		std::string _type;
};

#endif
