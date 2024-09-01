#include "Phonebook.hpp"

void Phonebook::setContact(Contact contact)
{
	this->_contacts[this->_index] = contact;
	_count = (_count < 8) ? _count + 1 : _count;
	this->_index = (this->_index + 1) % 8;
	return;
}

int Phonebook::_count = 0;
