/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drtaili <drtaili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 18:36:10 by drtaili           #+#    #+#             */
/*   Updated: 2023/09/28 11:46:30 by drtaili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact(void)
{
    std::cout<< "constructor Contact called"<< std::endl;
    return ;
}

Contact::~Contact(void)
{
    std::cout<< "deconstructor Contact called"<< std::endl;
    return ;
}

std::string Contact::get_firstName(void)
{
    return this->_firstName;
}
    
void Contact::set_firstName(std::string Fname)
{
    this->_firstName = Fname; 
}

std::string Contact::get_lastName(void)
{
    return this->_lastName;
}
    
void Contact::set_lastName(std::string Lname)
{
    this->_lastName = Lname; 
}

std::string Contact::get_nickName(void)
{
    return this->_nickName;
}
    
void Contact::set_nickName(std::string Nname)
{
    this->_nickName = Nname; 
}

std::string Contact::get_darkestSecret(void)
{
    return this->_darkestSecret;
}
    
void Contact::set_darkestSecret(std::string DSecret)
{
    this->_darkestSecret = DSecret; 
}

std::string Contact::get_phoneNumber(void)
{
    return this->_phoneNumber;
}
    
void Contact::set_phoneNumber(std::string PhoneNumber)
{
    this->_phoneNumber = PhoneNumber; 
}