/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mogul <mogul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 11:46:41 by mogul             #+#    #+#             */
/*   Updated: 2025/03/04 13:38:59 by mogul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

int main()
{
	Zombie *zombie;

	zombie = newZombie("z1");
	zombie->announce();
	delete zombie;
	
	randomChump("z2");
}
