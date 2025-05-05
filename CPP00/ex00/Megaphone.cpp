/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mogul <mogul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 15:09:44 by mogul             #+#    #+#             */
/*   Updated: 2025/02/27 18:11:17 by mogul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>	// pour touper
#include <iostream>	// Pour std::cout, std::cerr, std::clog
#include <string>	// Pour std::string


int main(int argc, char **argv)
{
	std::string Message;
	
	if (argc > 1)
	{
		for (int i = 1; i < argc; i++)
		{
			Message += argv[i];
			if (i < argc - 1 && Message[Message.length() - 1] != ' ' && argv[i + 1][0] != ' ')
				Message += " ";
		}
		for (std::size_t i = 0; i < Message.length(); i++)
			std::cout << static_cast<char>(std::toupper(Message[i]));
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
}
