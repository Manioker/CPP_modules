/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvacca <anvacca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 14:24:21 by anvacca           #+#    #+#             */
/*   Updated: 2025/03/12 15:17:34 by anvacca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	ClapTrap	unit0("Nanachi");
	FragTrap	unit1("Coolnachos");

	unit0.attack("Coolnachos");
	unit1.takeDamage(50);
	unit1.highFivesGuys();

	unit0.attack("Coolnachos");
	unit1.takeDamage(50);
	unit1.highFivesGuys();

	return (0);
}
