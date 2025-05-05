/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_file.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mogul <mogul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 17:48:19 by mogul             #+#    #+#             */
/*   Updated: 2025/03/05 19:59:08 by mogul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

bool	process_file(std::string filename, std::string str_to_rep, std::string rep_str)
{
	std::string		line;
	std::string		modified_line;
	size_t			found;
	size_t			pos = 0;
	
	std::ifstream 	in_file(filename);
	if (!in_file.is_open())
	{
		std::cerr << "Error: Cannot open file '" << filename << "'." << std::endl;
        return (false);
    }
	std::ofstream out_file((filename + ".replace").c_str());
    if (!out_file.is_open())
	{
        std::cerr << "Error: Cannot create output file." << std::endl;
        return (false);
    }
	while (std::getline(in_file, line))
	{
		while((found = line.find(str_to_rep, pos)) != std::string::npos)
		{
			modified_line.append(line, pos, found);
			modified_line.append(rep_str);
			pos = found + str_to_rep.length();
			modified_line.append(line, pos, (line.length() - str_to_rep.length() + rep_str.length()));
			line = modified_line;
			modified_line.clear();
			pos = 0;
		}
		if ((found = line.find(str_to_rep, pos)) == std::string::npos)
			out_file << line << std::endl;
	}
	in_file.close();
	out_file.close();
	return (true);
}
