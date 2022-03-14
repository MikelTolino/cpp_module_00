/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 18:38:43 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/03/14 17:34:12 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

void Contact::newContact(void)
{
	std::getline (std::cin, this->first_name);
	std::cout << "First name: ";
	std::getline (std::cin, this->first_name);
	std::cout << "Last name: ";
	std::getline (std::cin, this->last_name);
	std::cout << "Nickname: ";
	std::getline (std::cin, this->nickname);
	std::cout << "Phone number: ";
	std::getline (std::cin, this->phone_number);
	std::cout << "Darkest secret: ";
	std::getline (std::cin, this->darkest_secret);
}

std::string Contact::getFirstName(void)
{
	return this->first_name;
}

void Contact::setFirstName(std::string first_name)
{
	this->first_name = first_name;
}

std::string Contact::getLastName(void)
{
	return this->last_name;
}

void Contact::setLastName(std::string last_name)
{
	this->last_name = last_name;
}

std::string Contact::getNickname(void)
{
	return this->nickname;
}

void Contact::setNickname(std::string nickname)
{
	this->nickname = nickname;
}

std::string Contact::getPhoneNumber(void)
{
	return this->phone_number;
}

void Contact::setPhoneNumber(std::string phone_number)
{
	this->phone_number = phone_number;
}

std::string Contact::getDarkestSecret(void)
{
	return this->darkest_secret;
}

void Contact::setDarkestSecret(std::string secret)
{
	this->darkest_secret = secret;
}
