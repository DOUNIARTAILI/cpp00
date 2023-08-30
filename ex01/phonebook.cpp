/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drtaili <drtaili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 18:50:55 by drtaili           #+#    #+#             */
/*   Updated: 2023/08/30 21:56:29 by drtaili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.class.hpp"

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
    }
    contact.set_phoneNumber(str);
    str.clear();
    Phonebook::_contact[nb] = contact;
    nb++;
}

void Phonebook::displayContacts(void)
{
    int j = 0;
    while (j < 8)
    {
        if (this->_contact[j].get_firstName().empty())
            break;
        std::cout << "     Index|" << this->nb << "|";
        std::cout << "First Name|" << this->_contact[j].get_firstName() << "|";
        std::cout << " Last Name|" << this->_contact[j].get_lastName() << "|";
        std::cout << "  NickName|" << this->_contact[j].get_nickName();
        j++;
    }
}

void print_word(std::string str)
{
    int i = 0;
    int len = str.length();
    while (i < len)
    {
        print10(str, i);
        if (i++ < len)
            std::cout << "."<< std::endl;
        i++;
    }
}

void print10(std::string str, int begin)
{
    while (begin < (begin + 9))
    {
        std::cout << str[begin];
        begin++;
    }
}

void Phonebook::displayContactbyindex(int index)
{
    if (index > 7 || index < 0)
    {
        std::cout << "Contact doesn't exist !" << std::endl;
        return ;       
    } 
    else if (this->_contact[index].get_firstName().empty())
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
