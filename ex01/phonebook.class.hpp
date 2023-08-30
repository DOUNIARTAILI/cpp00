/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drtaili <drtaili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 18:37:24 by drtaili           #+#    #+#             */
/*   Updated: 2023/08/30 20:50:00 by drtaili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "contact.class.hpp"
#include <iostream>

class Phonebook
{
private :
    Contact _contact[8];
    int static nb;
public :
    Phonebook(void);
    ~Phonebook(void);
    void addContact(void);
    void displayContacts(void);
    void displayContactbyindex(int index);
};

#endif