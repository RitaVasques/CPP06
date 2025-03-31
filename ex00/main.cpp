/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritavasques <ritavasques@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 10:59:24 by ritavasques       #+#    #+#             */
/*   Updated: 2025/03/31 13:18:05 by ritavasques      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv) {
    if (argc != 2)
    {
        std::cout << "Invalid arguments" << std::endl;
        return (1);
    }
    ScalarConverter converter(argv[1]);
    
    (void)static_cast<char>(converter);
    (void)static_cast<int>(converter);
    (void)static_cast<float>(converter);
    (void)static_cast<double>(converter);

    return (0);
}