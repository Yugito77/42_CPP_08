/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcherpre <hcherpre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 17:46:24 by hcherpre          #+#    #+#             */
/*   Updated: 2022/12/02 19:04:20 by hcherpre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

template <typename T>

bool    easyfind(T cont, int found)
{

    if(std::find(cont.begin(), cont.end(), found) != cont.end())
    {
        std::cout<< "FOUND " << *(cont.end() - 1)<< std::endl;
		return (true);
    }
    else
    {
        std::cout<< "NOT FOUND " << std::endl;
		return (false);
    }
}

#endif