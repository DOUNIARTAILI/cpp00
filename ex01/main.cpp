/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drtaili <drtaili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 18:56:00 by drtaili           #+#    #+#             */
/*   Updated: 2023/09/06 00:31:47 by drtaili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "contact.class.hpp"
#include "phonebook.class.hpp"

int main()
{
    Phonebook phonebook;
    while (1)
    {
        std::cout << "The program only accepts ADD, SEARCH and EXIT"<< std::endl;
        std::string str;
        while (str.empty())
        {
            std::cout << "Enter ur option plz :)" << std::endl;
            std::getline (std::cin,str);
        }
        if (str.compare("ADD") == 0)
        {
            phonebook.addContact();
        }
        else if (str.compare("SEARCH") == 0)
        {
            phonebook.displayContacts();
            std::cout << "U can search on contact by index :"<< std::endl;
            str.clear();
            while (str.empty())
            {
                std::cout << "Enter index of the wanted contact down below :" << std::endl;
                std::getline (std::cin,str);
            }
            int index;
            if (str.compare("0") == 0)
                index = 0;
            else
                index = 9;
            phonebook.displayContactbyindex(index);
        }
        else if (str.compare("EXIT") == 0)
        {
            exit(0);
        }
    }
    return 0;
}