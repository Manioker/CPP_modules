/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvacca <anvacca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 14:26:11 by anvacca           #+#    #+#             */
/*   Updated: 2025/03/19 11:38:40 by anvacca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	for (unsigned int i = 0; i < 100; i++)
		this->_ideas[i] = "Sleep...";
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	for (unsigned int i = 0; i < 100; i++)
		this->_ideas[i] = copy._ideas[i];
	std::cout << "Brain constructor copy called" << std::endl;
}

Brain	&Brain::operator=(const Brain &other)
{
	for (unsigned int i = 0; i < 100; i++)
		this->_ideas[i] = other._ideas[i];
	std::cout << "Brain copy assignment constructor called" << std::endl;
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

void	Brain::printIdeas() const
{
	for (int i = 0; i < 100; i++)
		std::cout << this->_ideas[i] << std::endl;
}
