#include "Contact.hpp"

void Contact::setFirstName(std::string name)
{
	this->_firstName = name;
	return;
}

void Contact::setLastName(std::string name)
{
	this->_lastName = name;
	return;
}

void Contact::setNickName(std::string name)
{
	this->_nickName = name;
	return;
}

void Contact::setPhoneNumber(std::string number)
{
	this->_phoneNumber = number;
	return;
}

void Contact::setSecret(std::string secret)
{
	this->_darkestSecret = secret;
	return;
}
