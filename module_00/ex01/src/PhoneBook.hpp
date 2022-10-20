#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include "Contact.hpp"
#include "utils.hpp"

#define MAX_NUM_CONTACTS    8

class PhoneBook {
    private:
        int numberOfContacts;
        int numberOfContactsSaved;
        Contact contacts[MAX_NUM_CONTACTS];
        std::string getTruncatedStr(std::string str);

    public:
        PhoneBook();
        ~PhoneBook();
        void    addNewContact(const Contact& contact);
        void    printAllContacts();
        void    printContactByIndex(int index);
        int     getNumberOfContacts();
};

#endif