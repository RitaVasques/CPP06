/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rivasque <rivasque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 10:59:30 by ritavasques       #+#    #+#             */
/*   Updated: 2025/04/01 14:29:04 by rivasque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <limits>

ScalarConverter::ScalarConverter(std::string str) : _str(str) {
}

ScalarConverter::ScalarConverter(const ScalarConverter & other) {
    *this = other;
}

ScalarConverter::~ScalarConverter(void) {
}

ScalarConverter & ScalarConverter::operator=(const ScalarConverter & other) {
    _str = other._str;
    return *this;
}

ScalarConverter::operator char() {
    char c = 0;
    std::cout << "char: ";
    try {
        c = std::atoi(_str.c_str());
        if (_str == "nan" || _str == "+inf" || _str == "-inf")
        {
            std::cout << "impossible" << std::endl;
            return (0);
        }
        if (c < 32 || c > 126)
        {
            std::cout << "Non displayable" << std::endl;
            return (0);
        }
        if (c < CHAR_MIN || c > CHAR_MAX)
        {
            std::cout << "Out of limits" << std::endl;
            return (0);
        }
        std::cout << "'" << c << "'" << std::endl;
    }
    catch (std::invalid_argument &e) {
        std::cout << "impossible" << std::endl;
    }
    catch (std::out_of_range &e) {
        std::cout << "impossible" << std::endl;
    }
    return (c);
}

ScalarConverter::operator int() {
    int i = 0;
    std::cout << "int: ";
    try {
        i = std::atoi(_str.c_str());
        if (_str == "nan" || _str == "+inf" || _str == "-inf")
            std::cout << "impossible" << std::endl;
        else
            std::cout << i << std::endl;
    }
    catch (std::invalid_argument &e) {
        std::cout << "impossible" << std::endl;
    }
    catch (std::out_of_range &e) {
        std::cout << "impossible" << std::endl;
    }
    return (i);
}

ScalarConverter::operator float() {
    float f = 0;
    std::cout << "float: ";
    try {
        f = std::atof(_str.c_str());
        std::cout << std::fixed << std::setprecision(1) << f << "f" << std::endl;
    }
    catch (std::invalid_argument &e) {
        std::cout << "impossible" << std::endl;
    }
    catch (std::out_of_range &e) {
        std::cout << "impossible" << std::endl;
    }
    return (f);    
}

ScalarConverter::operator double() {
    double d = 0;
    std::cout << "double: ";
    try {
        d = std::atof(_str.c_str());
        std::cout << std::fixed << std::setprecision(1) << d << std::endl;
    }
    catch (std::invalid_argument &e) {
        std::cout << "impossible" << std::endl;
    }
    catch (std::out_of_range &e) {
        std::cout << "impossible" << std::endl;
    }
    return (d);    
}
