/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnummi <mnummi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 01:52:52 by mnummi            #+#    #+#             */
/*   Updated: 2023/07/12 01:53:10 by mnummi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
        /*
        In C we can represent a hexadecimal value by prefixing it with a "0x". 
        For example "x=0xf;" sets "x" to the decimal value 15 (or the binary value 1111). 
        The statement "x=0xff" would set x to the binary value "11111111", which is 255 in decimal.
        
        Also; Left Shift(<<)
        Let’s take a=5; which is 101 in Binary Form. 
        Now, if “a is left-shifted by 2” i.e a=a<<2 then a will become a=a*(2^2). 
        Thus, a=5*(2^2)=20 which can be written as 10100.

        Right Shift(>>)
        
        Let’s take a=5; which is 101 in Binary Form. 
        Now, if “a is right-shifted by 2” i.e a=a>>2 then a will become a=a/(2^2). 
        Thus, a=a/(2^2)=1 which can be written as 01.
        below here we right shift buf[i] >> 4
        */
int    ft_print_ptr(void *p)
{
    unsigned long   ptr_address;
    int     len;

    len = 0;
    if (p == NULL)
    {
        ft_putstr("(nil)");
        return ;
    }
    ptr_address = (unsigned long)p;
    len += ft_putstr("0x");
    len += ft_print_hex(ptr_address, 1);
    return (len);
}