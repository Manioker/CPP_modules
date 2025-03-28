/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvacca <anvacca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 14:24:21 by anvacca           #+#    #+#             */
/*   Updated: 2025/03/12 15:06:04 by anvacca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main()
{
	ClapTrap	unit0("Nanachi");
	ScavTrap	unit1("Nanachos");

	unit0.attack("Nanachos");
	unit1.takeDamage(50);
	unit1.attack("Nanachi");
	unit0.takeDamage(0);
	unit1.guardGate();

	unit0.attack("Nanachos");
	unit1.takeDamage(50);
	unit1.guardGate();

	return (0);
}
