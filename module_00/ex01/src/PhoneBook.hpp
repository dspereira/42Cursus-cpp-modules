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
        Contact contacts[8];
        std::string getTruncatedStr(std::string str);

    public:
        PhoneBook(){
           this->numberOfContacts = 0;
        }
        void    addNewContact(const Contact& contact);
        void    printAllContacts();
        void    printContactByIndex(int index);
        int     getNumberOfContacts();
};

#endif