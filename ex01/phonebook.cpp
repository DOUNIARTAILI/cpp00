/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drtaili <drtaili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 18:50:55 by drtaili           #+#    #+#             */
/*   Updated: 2023/09/28 11:53:42 by drtaili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <sstream>

int Phonebook::nb = 0;

Phonebook::Phonebook()
{
    std::cout<< "constructor Phonebook called" << std::endl;
    return ;
}

Phonebook::~Phonebook()
{
    std::cout<< "deconstructor Phonebook called" << std::endl;
    return ;   
}

void Phonebook::addContact(void)
{
    Contact contact;
    std::string str;

    if (nb == 8)
        nb = 0;
    while (str.empty())
    {
        std::cout << "Enter First Name :" <<std::endl; 
        std::getline (std::cin,str);
    }
    contact.set_firstName(str);
    str.clear();
    while (str.empty())
    {
        std::cout << "Enter Last Name :" <<std::endl;
        std::getline (std::cin,str);
    }
    contact.set_lastName(str);
    str.clear();
    while (str.empty())
    {
         std::cout << "Enter NickName :" <<std::endl;
        std::getline (std::cin,str);
    }
    contact.set_nickName(str);
    str.clear();
    while (str.empty())
    {
        std::cout << "Enter Darkest secret :" <<std::endl;
        std::getline (std::cin,str);
    }
    contact.set_darkestSecret(str);
    str.clear();
    while (str.empty())
    {
        std::cout << "Enter Phone Number :" <<std::endl;
        std::getline (std::cin,str);
        std::istringstream iss(str);
        int phonenumber;
        if (iss >> phonenumber)
            contact.set_phoneNumber(str);
        else
        {
            std::cout << "Invalid input. Please enter a valid integer phonenumber." << std::endl;
            str.clear();
        }
    }
    str.clear();
    Phonebook::_contact[nb] = contact;
    nb++;
}

void Phonebook::displayContacts(void)
{
    int j = 0;
    if (this->_contact[j].get_firstName().empty())
        return ;
    std::cout << std::setw(10) << std::right << "Index" << "|";
    std::cout << std::setw(10) << std::right << "First Name" << "|";
    std::cout << std::setw(10) << std::right << "Last Name" << "|";
    std::cout << std::setw(10) << std::right << "NickName" << "|" << std::endl;
    while (j < 8)
    {
        if (!(this->_contact[j].get_firstName().empty())) 
        {
            std::cout << std::setw(10) << std::right << j << "|";
            if (this->_contact[j].get_firstName().length() > 10)
                std::cout << std::setw(10) << std::right << this->_contact[j].get_firstName().substr(0, 9).append(".") << "|";
            else
                std::cout << std::setw(10) << std::right << this->_contact[j].get_firstName().substr(0, 10) << "|";
            if (this->_contact[j].get_lastName().length() > 10)
                std::cout << std::setw(10) << std::right << this->_contact[j].get_lastName().substr(0, 9).append(".") << "|" ;
            else
                std::cout << std::setw(10) << std::right << this->_contact[j].get_lastName().substr(0, 10) << "|" ;
            if (this->_contact[j].get_nickName().length() > 10)
                std::cout << std::setw(10) << std::right << this->_contact[j].get_nickName().substr(0, 9).append(".") << "|" << std::endl;
            else
                std::cout << std::setw(10) << std::right << this->_contact[j].get_nickName().substr(0, 10) << "|" << std::endl;
        }
        j++;
    }
}

void Phonebook::displayContactbyindex(int index)
{
    if (index < 0 || index > 7)
    {
        std::cout << "Contact doesn't exist !" << std::endl;
        return ;
    }
    if (this->_contact[index].get_firstName().empty())
    {
        std::cout << "Contact doesn't exist !" << std::endl;
        return ;
    }
    else
    {
        std::cout << "First Name : " << this->_contact[index].get_firstName() << std::endl;
        std::cout << "Last Name : " << this->_contact[index].get_lastName() << std::endl;
        std::cout << "NickName : " << this->_contact[index].get_nickName() << std::endl;
        std::cout << "Darkest secret : " << this->_contact[index].get_darkestSecret() << std::endl;
        std::cout << "Phone Number : " << this->_contact[index].get_phoneNumber() << std::endl;    
    }
}
