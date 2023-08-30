/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drtaili <drtaili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 18:05:25 by drtaili           #+#    #+#             */
/*   Updated: 2023/08/30 15:55:28 by drtaili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    if (ac > 1)
    {
        std::string str;
        int i = 1;
        while (i < ac)
        {
            size_t j = 0;
            str = av[i];
            while (j < str.length())
            {
                str[j] = std::toupper(str[j]);
                std::cout << str[j];
                j++;
            }
            i++;
        }
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    return (0);
}