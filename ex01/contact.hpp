/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drtaili <drtaili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 18:34:47 by drtaili           #+#    #+#             */
/*   Updated: 2023/09/28 11:46:09 by drtaili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>

class Contact
{
private:
    std::string _firstName;
    std::string _lastName;
    std::string _nickName;
    std::string _darkestSecret;
    std::string  _phoneNumber;
public :
    Contact(void);
    ~Contact(void);
    std::string get_firstName(void);
    void set_firstName(std::string);
    std::string get_lastName(void);
    void set_lastName(std::string);
    std::string get_nickName(void);
    void set_nickName(std::string);
    std::string get_darkestSecret(void);
    void set_darkestSecret(std::string);
    std::string get_phoneNumber(void);
    void set_phoneNumber(std::string);
};

#endif