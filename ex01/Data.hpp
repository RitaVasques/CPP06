/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rivasque <rivasque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 13:52:11 by ritavasques       #+#    #+#             */
/*   Updated: 2025/04/01 15:44:42 by rivasque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>
# include <stdint.h>

class Data {
    public:
        Data(std::string str);
        Data(const Data & other);
        ~Data(void);
        
        Data & operator=(const Data & other);

        std::string getStr(void) const;
        
    private:
        std::string _str;
};

#endif