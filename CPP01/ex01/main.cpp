/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mogul <mogul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 11:46:41 by mogul             #+#    #+#             */
/*   Updated: 2025/03/04 14:24:59 by mogul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

int main()
{
	Zombie *zombie;

	zombie = zombieHorde(10, "Bob");
	for (int i = 0; i < 10; i++)
	{
		std::cout << "[" << i << "] ";
		zombie[i].announce();
	}
	delete[] zombie;
	return (0);
}
