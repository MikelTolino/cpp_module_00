/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 23:34:41 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/03/08 01:48:10 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Megaphone {

	public:
		void loud(char **word, int num);
};

void Megaphone::loud(char **word, int num) {

	char upper;

	if (num == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return;
	}
	for (int i = 1; i < num; i++)
		for (size_t j = 0; j < strlen(word[i]); j++)
		{
			upper = toupper(word[i][j]);
			std::cout << upper;
		}
	std::cout << std::endl;
}

int main(int argc, char **argv)
{
	Megaphone m;

	m.loud(argv, argc);
	return (0);
}
