/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 15:12:06 by guferrei          #+#    #+#             */
/*   Updated: 2022/05/16 20:49:03 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

static bool	checkInputFile(char *file) {
	std::ifstream	ifs(file);
	
	if (!ifs.is_open())
		return false;
	ifs.close();
	return true;
}

static std::string	outputNewString(std::string s1, std::string s2, std::string buffer) {
	int			index;
	std::string	newString;

	index = buffer.find(s1);
	if (index < 0)
		return (buffer);
	while (index >= 0) {
		newString.append(buffer.substr(0, index));
		newString.append(s2);
		buffer.erase(0, (index + s1.length()));
		index = buffer.find(s1);
	}
	newString.append(buffer);
	return (newString);
}

static void	replace(char *file, const char *newFile, char *s1, char *s2) {
	std::ifstream	ifs(file);
	std::ofstream	ofs(newFile);
	std::string		buffer;

	while (ifs.peek() != EOF) {
		ifs >> buffer;
		buffer = outputNewString(s1, s2, buffer);
		if (!buffer.empty())
			ofs << buffer;
		if (ifs.peek() == '\n')
			ofs << std::endl;
		else if (ifs.peek() != EOF)
			ofs << " ";
	}
	ifs.close();
	ofs.close();
}

int	main(int argc, char **argv) {
	std::string	newFile;
	
	if (argc != 4) {
		std::cerr << "Invalid Number of Arguments" << std::endl;
		return (1);
	}
	if (!checkInputFile(argv[1])) {
		std::cerr << "Error!! File Does Not Exist" << std::endl;
		return (2);
	}
	newFile = argv[1];
	newFile.append(".replace");
	replace(argv[1], newFile.c_str(), argv[2], argv[3]);
}
