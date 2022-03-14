/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 18:35:57 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/03/11 18:28:53 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <string>

class Contact {

private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;

public:
	void newContact(void);
	std::string getFirstName(void);
	void setFirstName(std::string);
	std::string getLastName(void);
	void setLastName(std::string);
	std::string getNickname(void);
	void setNickname(std::string);
	std::string getPhoneNumber(void);
	void setPhoneNumber(std::string);
	std::string getDarkestSecret(void);
	void setDarkestSecret(std::string);
};

#endif