/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafernan <vafernan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 17:12:16 by vafernan          #+#    #+#             */
/*   Updated: 2025/04/02 18:28:37 by vafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//./program_name file.txt string_to_find string_to_replace

#include "./Includes/includes.hpp"

static bool	make_file(std::string file, char **argv)
{
	std::ofstream	file_cpy;		///Output file
	size_t			i;
	size_t			word_pos;		///Psotion of the word to be replaced
	std::string		new_file_name;
	const char		*new_name;

	if (**argv == 0)
		return (false);
	
	///Create the new file
	new_file_name = *argv;
	new_file_name.append(".replace");
	new_name = new_file_name.c_str(); //TODO Understand better
	file_cpy.open(new_name, std::ios::trunc); ///Open the file to write, truncate if ti already exists
	if (!file_cpy.is_open()) ///Check if the file can be opened
		return (false);
	if (file.empty() == true)
	{
		file_cpy.close();
		return (true);
	}
	
	argv++; ///Move to the next argument, the string to be found
	i = 0;
	while (i < file.length()) ///Iterate through the whole file
	{
		word_pos = file.find(argv[0], i); ///Find the word to be replaced
		if (word_pos != std::string::npos) ///If the word is found
		{
			file_cpy << file.substr(i, word_pos - i); ///Copy the file until the word to be replaced
			if (*argv[1] != 0) ///If the word to be replaced is not empty
				file_cpy << argv[1]; ///Write the new word
			i += (word_pos - i) + strlen(argv[0]); ///Move the iterator to the end of the word to be replaced	
		}
		else ///If the word is not found iterate through the file.
		{
			file_cpy << file.substr(i, file.length() - i);
			break ;
		}
	}
	file_cpy.close(); ///Close the file
	return (true);
}

int	main(int argc, char **argv)
{
	std::ifstream	file;		///Input file
	char			*memblock;	///Buffer to store the file content
	unsigned int	size;		///Size of the file

	///Check if the number of arguments is correct
	if (argc < 4 || argc > 4)
	{
		std::cout << "Only 4 arguments!" << std::endl;
		return (1);
	}
	argv++; ///Move to the next argument, the file name
	file.open(*argv, std::ios::ate); ///Open the file to read
	if (!file.is_open()) ///Check if the file can be opened
	{
		std::cout << "Error opening file: " << *argv << std::endl;
		return (1);
	}
	
	///Check if the string to be found is empty
	if (*argv[1] == 0)
	{
		std::cout << "Please provide the file, string to find and string to be replaced." << std::endl;
		return (1);
	}
	
	file.seekg(0, std::ios::end);		///Move the end and determine file size
	size = (unsigned int) file.tellg();	///Get the file size
	if ((unsigned int) size > 0)
	{
		///Allocate memory for the file content
		memblock = new (std::nothrow) char[(unsigned int) size + 1];
		if (memblock == NULL) ///Check if the memory allocation failed
		{
			file.close();
			return (1);
		}
		file.seekg(0, std::ios::beg); ///Move to the beginning of the file
		file.getline(memblock, (unsigned int) size + 1, 0); ///Read the file content		
		file.close(); ///Close the file

		///Create the new file
		if (!make_file(memblock, argv))
		{
			std::cout << "Error: Cannot create file!" << std::endl;
			delete[] memblock;
			return (1);
		}
		delete[] memblock; ///Free the memory
	}
	else ///If the file is empty
	{
		file.close();
		if (!make_file("", argv)) ///Create the new file with an empyty string
		{
			std::cout << "Error: Cannot create file!" << std::endl;
			return (1);
		}
	}
	return (0);
}