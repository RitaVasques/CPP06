/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritavasques <ritavasques@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 10:57:10 by ritavasques       #+#    #+#             */
/*   Updated: 2025/03/31 13:23:42 by ritavasques      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <iomanip>

class ScalarConverter {
    public:
        // Constructors & destructor
        ScalarConverter(std::string str);
        ScalarConverter(const ScalarConverter & other);
        ~ScalarConverter(void);
        
        ScalarConverter & operator=(const ScalarConverter & other);
        
        //Conversion
        operator char();
        operator int();
        operator float();
        operator double();
        
    private:
        std::string _str;
};

#endif