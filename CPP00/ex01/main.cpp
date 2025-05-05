/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mogul <mogul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 20:48:33 by mogul             #+#    #+#             */
/*   Updated: 2025/02/28 16:41:23 by mogul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"

int main()
{
	PhoneBook phonebook;
	std::string command;
	
	while (true)
	{
		std::cout << "Enter Command (ADD, SEARCH, EXIT): ";
		if (!std::getline(std::cin, command))
		{
			std::cout << "\nTerminating program...)";
			break ;
		}
		else if (command.compare("ADD") == 0)
		{
			phonebook.addContact();
			continue ;
		}
		else if (command.compare("SEARCH") == 0)
		{
			phonebook.print_phonebook();
			continue ;
		}
		else if (command.compare("EXIT") == 0)
		{
			std::cout << "Closing phonebook...)";
			break ;
		}
		else
		{
			if (command[0])		
				std::cout << "Please enter valid command \n";
		}
	}
}
