/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mogul <mogul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 14:03:03 by mogul             #+#    #+#             */
/*   Updated: 2025/03/04 14:40:24 by mogul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name)
{
	Zombie	*zombie;

	zombie = new Zombie[N];
	for (int i(0); i < N; i++)
		zombie[i].setName(name);
	return (zombie);
}
