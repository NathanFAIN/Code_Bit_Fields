/*
** EPITECH PROJECT, 2020
** Code_Bit_Fields
** File description:
** bit_fields
*/

#include <stdio.h>
#include <unistd.h>

#ifndef BIT_FIELDS_H_
#define BIT_FIELDS_H_

typedef union bit_fields_s bit_fields_t;

union bit_fields_s
{
    unsigned char value;
    struct
    {
        unsigned char bit1 : 1;
        unsigned char bit2 : 1;
        unsigned char bit3 : 1;
        unsigned char bit4 : 1;
        unsigned char bit5 : 1;
        unsigned char bit6 : 1;
        unsigned char bit7 : 1;
        unsigned char bit8 : 1;
    } byte;
};

#endif /* !BIT_FIELDS_H_ */
