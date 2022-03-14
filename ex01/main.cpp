/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 19:57:32 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/03/11 20:17:14 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

void choose_cmd()
{

	std::cout << "|--------------------------|\n"
			  << "|         PHONEBOOK        |\n"
			  << "|--------------------------|\n"
			  << "|Insert a following command|\n"
			  << "|--------------------------|\n"
			  << "|  ADD  |  SEARCH  |  EXIT |\n"
			  << "|--------------------------|\n\n"
			  << " >> ";
}

int main()
{
	std::string cmd;

	PhoneBook pb = PhoneBook();
	while (true)
	{
		choose_cmd();
		std::cin >> cmd;
		std::cout << std::endl;
		if (cmd.compare("ADD") == 0)
			pb.addNewContact();
		if (cmd.compare("SEARCH") == 0)
			pb.searchContact();
		if (cmd.compare("EXIT") == 0)
			break;
	}
	return (0);
}