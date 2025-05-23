/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvacca <anvacca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 13:12:27 by anvacca           #+#    #+#             */
/*   Updated: 2025/03/28 13:12:31 by anvacca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

#define GRAY	"\e[30m"
#define RESET	"\e[0m"

// ========================================================================== //
//   Constructors & Destructors                                               //
// ========================================================================== //

Cure::Cure() : AMateria("cure")
{
	std::cout << GRAY "Cure Constructor Called" RESET << std::endl;
}

Cure::Cure(const Cure &copy)
{
	(void)copy;
	std::cout << GRAY "Cure Copy Constructor Called" RESET << std::endl;
}

Cure::~Cure()
{
	std::cout << GRAY "Cure Destructor Called" RESET << std::endl;
}

// ========================================================================== //
//   Operators                                                                //
// ========================================================================== //

Cure	&Cure::operator=(const Cure &other)
{
	(void)other;
	std::cout << GRAY "Cure Copy Assignment Constructor Called" RESET << std::endl;
	return (*this);
}

// ========================================================================== //
//   Methods & Functions                                                      //
// ========================================================================== //

Cure	*Cure::clone() const
{
	return (new Cure());
}

void		Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
