/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mogul <mogul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 14:44:02 by mogul             #+#    #+#             */
/*   Updated: 2025/03/05 13:19:28 by mogul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main()
{
	std::string message = "HI THIS IS BRAIN";
	std::string	*ptr = &message;
	std::string	&ref = message;
	
	std::cout << "message : " << message << std::endl;
	std::cout << "ptr : " << ptr << std::endl;
	std::cout << "ref : " << ref << std::endl;
	
	std::cout << "Value of message : " << message << std::endl;
	std::cout << "Value of ptr : " << *ptr << std::endl;
	std::cout << "Value of ref : " << ref << std::endl;

	return(0);
}
