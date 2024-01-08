/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bootjan <bootjan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 19:09:11 by bootjan           #+#    #+#             */
/*   Updated: 2024/01/07 22:36:20 by bootjan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

static void	print_error(void)
{
	std::cout << "Error" << std::endl;
}

static void	add_line(std::ofstream &outfile, std::string line, \
const char *s1, const char *s2)
{
	int	lineLength = line.size();
	int	s1Len = std::strlen(s1);

	for (int i = 0; i < lineLength; i++)
	{
		if (std::strncmp(&(line[i]), s1, s1Len) == 0)
		{
			outfile << s2;
			i += s1Len - 1;
		}
		else
			outfile << line[i];
	}
}

static void	replace_words(std::ofstream &outfile, std::ifstream &infile, \
const char *s1, const char *s2)
{
	std::string	line;

	while (!infile.eof())
	{
		getline(infile, line);
		add_line(outfile, line, s1, s2);
		outfile << std::endl;
	}
}

static char	*compute_filename(const char *argv)
{
	char	*filename = new char [std::strlen(argv) + std::strlen(".replace") + 1];
	if (!filename)
		return (NULL);
	std::strcpy(filename, argv);
	std::strcat(filename, ".replace");
	return (filename);
}

int	main(int argc, const char **argv)
{
	char			*filename;
	std::ofstream	outfile;
	std::ifstream	infile;

	if (argc != 4 || std::strlen(argv[2]) == 0)
		return (print_error(), 1);
	filename = compute_filename(argv[1]);
	if (!filename)
		return (print_error(), 1);
	infile.open(argv[1], std::ios::in);
	if (!infile.is_open())
		return (delete filename, print_error(), 1);
	outfile.open(filename, std::ios::out | std::ios::trunc);
	replace_words(outfile, infile, argv[2], argv[3]);
	delete filename;
	infile.close();
	outfile.close();
	return (0);
}
