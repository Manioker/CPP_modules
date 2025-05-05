/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mogul <mogul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 17:29:19 by mogul             #+#    #+#             */
/*   Updated: 2025/03/05 17:44:33 by mogul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

bool	check_args(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Usage: <filename> <string_to_replace> <replacement_string>" << std::endl;
        return (false);
	}
	if (!argv[1][0] || !argv[2][0] || !argv[3][0])
	{
		std::cerr << "You have given an empty argument! Please folllow Usage" << std::endl;
		std::cerr << "Usage: <filename> <string_to_replace> <replacement_string>" << std::endl;
		return (false);
	}
	return (true);
}
