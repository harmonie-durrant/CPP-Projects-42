#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact
{
	public:
		// Init and Destroy
		Contact();
		~Contact();
		// Getters
		std::string	getFirstName() const;
		std::string	getLastName() const;
		std::string	getNickName() const;
		std::string	getPhoneNumber() const;
		std::string	getSecret() const;
		// Setters
		void setFirstName(std::string name);
		void setLastName(std::string name);
		void setNickName(std::string name);
		void setPhoneNumber(std::string number);
		void setSecret(std::string secret);
	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickName;
		std::string	_phoneNumber;
};

#endif
