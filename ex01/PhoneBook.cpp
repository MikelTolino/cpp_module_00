#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook(void)
{
	this->size = 0;
	return;
};

void PhoneBook::addNewContact(void)
{
	std::cout << "----\n"
			  << "Data\n"
			  << "----\n";
	if (this->getSize() == 8)
		this->size = 0;
	this->contact[this->size].newContact();
	this->size++;
	std::cout << "Contact added\n\n";
}

void PhoneBook::searchContact(void)
{
	int index;

	for (int i = 0; i < (int)this->size; i++)
	{
		std::cout << "|";
		std::cout << i + 1;
		std::cout << "|";
		std::cout << std::setw (10) << std::right << this->contact[i].getFirstName() ;
		std::cout << "|";
		std::cout << std::setw (10) << std::right << this->contact[i].getLastName();
		std::cout << "|";
		std::cout << std::setw (10) << std::right << this->contact[i].getNickname();
		std::cout << "|";
		std::cout << "\n";
	}
	std::cout << std::endl;
	std::cout << "Insert index (1-8): ";
	std::cin >> index;
	index--;
	if (index >= 0 && index < 8)
	{
		std::cout << "Contact " << index + 1 << std::endl;
		std::cout << "---------\n";
		std::cout << "First name: " << this->contact[index].getFirstName() << std::endl;
		std::cout << "Last name: " << this->contact[index].getLastName() << std::endl;
		std::cout << "Nickname: " << this->contact[index].getNickname() << std::endl;
		std::cout << "Phone number: " << this->contact[index].getPhoneNumber() << std::endl;
		std::cout << "Darkest secret: " << this->contact[index].getDarkestSecret() << std::endl;
	}
	else
		std::cout << "Wrong index\n";
	std::cout << std::endl;
	return;
}

unsigned int PhoneBook::getSize(void)
{
	return this->size;
}
