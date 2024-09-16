#include "Contact.hpp"

std::string Contact::getFirstName() const
{
	return this->_firstName;
}

std::string Contact::getLastName() const
{
	return this->_lastName;
}

std::string Contact::getNickName() const
{
	return this->_nickName;
}

std::string Contact::getPhoneNumber() const
{
	return this->_phoneNumber;
}

std::string Contact::getSecret() const
{
	return this->_darkestSecret;
}
