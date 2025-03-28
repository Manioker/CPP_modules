/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvacca <anvacca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 14:24:21 by anvacca           #+#    #+#             */
/*   Updated: 2025/03/12 14:45:29 by anvacca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap	unit0("Bondold");
	ClapTrap	unit1("Nanachi");

	// Attack
	unit1.attack("Bondold");
	unit0.takeDamage(5);

	// Repair
	unit0.beRepaired(1);
	unit0.beRepaired(1);
	unit0.beRepaired(1);
	unit0.beRepaired(1);
	unit0.beRepaired(1);
	unit0.beRepaired(1);
	unit0.beRepaired(1);
	unit0.beRepaired(1);
	unit0.beRepaired(1);
	unit0.beRepaired(1);

	// Not enough Energy Points
	unit0.beRepaired(1);
	unit0.attack("Nanachi");

	// Kill
	unit1.attack("Bondold");
	unit0.takeDamage(15);

	// Not enough Hit Points
	unit0.beRepaired(100);
	unit0.attack("Nanachi");
	unit1.attack("Bondold");
	unit0.takeDamage(5);

	return (0);
}
