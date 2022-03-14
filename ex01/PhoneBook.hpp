/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 19:45:56 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/03/11 18:46:29 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <string>
# include <iomanip>
# include "Contact.hpp"
# define MAX 8

class PhoneBook	{

private:
	Contact contact[MAX];
	unsigned int size;

public:
	PhoneBook(void);
	void addNewContact(void);
	void searchContact(void);
	unsigned int getSize(void);
};

#endif