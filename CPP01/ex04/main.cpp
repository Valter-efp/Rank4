/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafernan <vafernan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 17:12:16 by vafernan          #+#    #+#             */
/*   Updated: 2025/04/21 15:48:09 by vafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Includes/includes.hpp"

static bool make_file(const std::string& content,
					  const std::string& inputFile,
					  const std::string& toFind,
					  const std::string& toReplace)
{
	// Create the new filename
	std::string newFileName = inputFile + ".replace";
	//Open the new file to write
	std::ofstream outFile(newFileName.c_str());

	// Check if the file can be opened
	if (!outFile.is_open())
		return (false);

	// Start replacing
	size_t pos = 0; //Starting position
	while (pos < content.length())
	{
		// Find the next string to find
		size_t found = content.find(toFind, pos);
		if (found != std::string::npos) //If the string is found
		{
			outFile << content.substr(pos, found - pos); // Write the content before the found string
			outFile << toReplace;						// Write the replacement string
			pos = found + toFind.length();				// Move the position to the end of the found string
		}
		else	//If the string is not found
		{
			outFile << content.substr(pos); 	// Write the remaining content
			break ;
		}
	}
	outFile.close();	//Close the output file
	return (true);
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Try somenthing like: ./ex04 <file> <string_to_find> <string_to_replace>" << std::endl;
		return (1);
	}

	//Pase the arguments
	std::string inputFile    = argv[1];
	std::string stringToFind = argv[2];
	std::string stringToReplace = argv[3];

	if (stringToFind.empty())	// Check if str to find is not empty
	{
		std::cerr << "Error: The string to find cannot be empty." << std::endl;
		return (1);
	}

	std::ifstream file(inputFile.c_str(), std::ios::binary | std::ios::ate);; // Open the file in binary mode(to preserve content, it may change depending on OS, type of file etc), and move to the end to get the size
	if (!file.is_open())
	{
		std::cerr << "Error: Cannot open file '" << inputFile << "'" << std::endl;
		return (1);
	}

	std::streamsize size = file.tellg();	// Get the current position of the file point, that is the size of the file
	file.seekg(0, std::ios::beg);			//Move back to the beginning of the file

	std::string fileContent; // Create a string to hold the file content
	if (size > 0)
	{
		fileContent.resize(static_cast<size_t>(size));	// Resize the string to hold the file content
		file.read(&fileContent[0], size);				// Read the file content into the string
	}
	file.close();

	// Call the make_file function to create the new file
	if (!make_file(fileContent, inputFile, stringToFind, stringToReplace))
	{
		std::cerr << "Error: Failed to create output file." << std::endl;
		return (1);
	}

	return (0);
}