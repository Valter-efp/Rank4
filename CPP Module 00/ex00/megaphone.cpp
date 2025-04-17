/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafernan <vafernan@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 17:33:16 by vafernan          #+#    #+#             */
/*   Updated: 2025/04/17 11:40:09 by vafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std; // enables the use of cout, endl and other functions withou explicitly writing std:: before them

int main(int argc, char **argv)
{
	if (argc == 1)
	{
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
		//cout +- same as printf
		//endl +- same as \n
		return (0);
	}
	for (int i = 1; i < argc; i++) //This loop will iterate through each argument skiping the 1st.
	{
		for (int j = 0; argv[i][j]; j++) // Goes through each char of the current arg.
			cout << (char)toupper(argv[i][j]);
	}
	cout << endl;
	return (0);
}