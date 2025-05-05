/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mogul <mogul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 17:15:48 by mogul             #+#    #+#             */
/*   Updated: 2025/03/05 19:54:38 by mogul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

int main(int argc, char **argv)
{
	if (!check_args(argc, argv))
		return (1);
	if (!process_file(argv[1], argv[2], argv[3]))
		return (1);
	return(0);
}
