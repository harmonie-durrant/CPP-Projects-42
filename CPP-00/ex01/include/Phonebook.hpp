#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

# define MAX_CONTACTS 8
# define ERR_STR "The program only accepts: ADD, SEARCH, and EXIT\n"

class Phonebook
{
	public:
		// Init and Destroy
		Phonebook();
		~Phonebook();
		// Getters
		Contact getContact(int index) const;
		int		getCount() const;
		// Setters
		void setContact(Contact contact);
	private:
		static int		_count;
		Contact			_contacts[MAX_CONTACTS];
		int				_index;
};

// Input
char	*get_input(void);
int		check_input(char *input);

#endif
