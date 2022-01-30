/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** display_number
*/

#ifndef DISPLAY_NUMBER_H_
#define DISPLAY_NUMBER_H_

#include "./../include/main.h"

int unsigned_to_str(unsigned int nb);
int my_put_adress(void *p);
int put_big_string(char *str);
int number_str(char *str);
char *other_octal(int nb);

#define ADRESS
unsigned long nb;
char res[9];

#endif /* !DISPLAY_NUMBER_H_ */