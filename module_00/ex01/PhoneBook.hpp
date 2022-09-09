#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"

#define MAX_NUM_CONTACTS    8

class PhoneBook {
    private:
        int numberOfContacts;
        Contact contacts[8];

    public:
        PhoneBook(){
           setNumberOfContacts(0);
        }
        void    addNewContact(Contact contact);
        void    setNumberOfContacts(int numberOfContacts);
		int     getNumberOfContacts(void);
};

#endif