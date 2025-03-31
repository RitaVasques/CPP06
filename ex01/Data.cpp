/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritavasques <ritavasques@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 13:58:13 by ritavasques       #+#    #+#             */
/*   Updated: 2025/03/31 14:17:10 by ritavasques      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(std::string str) : _str(str) {
}

Data::Data(const Data & other) {
    *this = other;
}

Data::~Data(void) {
}

Data & Data::operator=(const Data & other) {
    this->_str = other._str;
    return *this;
}

std::string Data::getStr(void) const {
    return this->_str;
}