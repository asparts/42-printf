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
void    ft_print_ptr(void *p)
{
    int     i;
    void *ptr;
    unsigned char   buf[sizeof(ptr)];
    unsigned char hi;
    unsigned char lo;
    char tmp[2];

    tmp[0] = hi;
    tmp[1] = lo;
    ptr = &p;
    i = sizeof(ptr) - 1;
    ft_memcpy(buf, &ptr, sizeof(ptr)); //TODO: comments for below while
    while (i >=0)
    {

        hi = (buf[i] >> 4)  & 0xf;
        lo = buf[i] & 0xf;
        if (hi < 10)
            tmp[0] += '0';
        else
            tmp[0] += 'a' -10;
        if (lo < 10)
            tmp[1] += '0';
        else
            tmp[1] += 'a' -10;
        write(1, tmp, 2);
        i--;
    }
}