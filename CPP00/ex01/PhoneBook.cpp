/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mogul <mogul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 19:30:47 by mogul             #+#    #+#             */
/*   Updated: 2025/02/28 16:42:57 by mogul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Phonebook.class.hpp"

PhoneBook::PhoneBook()
{
	this->index = 0;
	this->phonebook_print = 0;
	return;
}
PhoneBook::~PhoneBook()
{
	return;
}
void	PhoneBook::addContact()
{
	std::string firstname, lastname, nickname, phone_number, darkest_secret;
	
	if (index > 7)
		index = 0;
	std::cout << "Follow this few steps to add new contact" << std::endl;
	std::cout << "Enter First Name : ";
	std::cin >> firstname;
	std::cout << "Enter Last Name : ";
	std::cin >> lastname;
	std::cout << "Enter Nickname : ";
	std::cin >> nickname;
	std::cout << "Enter Phone Number : ";
	std::cin >> phone_number;
	std::cout << "Enter Darkest Secret : ";
	std::cin >> darkest_secret;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	contact[index].setContact(firstname, lastname, nickname, phone_number, darkest_secret);
	index++;
	if (phonebook_print < 8)
		phonebook_print++;
}
void	PhoneBook::print_phonebook()
{
	unsigned int contact_index = 0;
	std::string	input;
	
	std::cout << "╔══════════╦══════════╦══════════╦══════════╗\n";
	std::cout << "║   Index  ║First Name║ Last Name║ Nickname ║\n";
	std::cout << "╠══════════╬══════════╬══════════╬══════════╣\n";
	for(unsigned int i(0); i < phonebook_print; i++)
	{
		std::cout << "║" << std::setw(10) << i + 1;
		if (contact[i].firstname.length() <= 10)
			std::cout << "║" << std::setw(10) << contact[i].firstname;
		else
			std::cout << "║" << contact[i].firstname.substr(0, 9) << '.';
		if (contact[i].lastname.length() <= 10)
			std::cout << "║" << std::setw(10) << contact[i].lastname;
		else
			std::cout << "║" << contact[i].lastname.substr(0, 9) << '.';
		if (contact[i].nickname.length() <= 10)
			std::cout << "║" << std::setw(10) << contact[i].nickname << "║\n";
		else
			std::cout << "║" << contact[i].nickname.substr(0, 9) << '.' << "║\n";
	}
	std::cout <<	"╚══════════╩══════════╩══════════╩══════════╝\n";
	if (phonebook_print == 0)
		return;
	while (true)
	{
		std::cout << "Enter Contact's Index: ";
		if (!(std::cin >> input))
		{
			if (std::cin.eof())
			{
				std::cout << "\nEOF detected. Exiting...\n";
				break;
			}
		}
		if (input.length() > 1)
		{
			std::cout << "Contact's index must be in the phonebook\n";
			continue ;
		}
		if (!isdigit(input[0]))
		{
			std::cout << "The contact's index must be a single digit\n";
			continue ;
		}
		contact_index = std::stoi(input);
		if (contact_index > phonebook_print || contact_index < 1)
		{
			std::cout << "Wrong number selected, please enter a contact's index in the phonebook\n";	
			continue ;
		}
		else
		{
			contact[contact_index - 1].print_contact();
			break ;
		}
	}
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}
