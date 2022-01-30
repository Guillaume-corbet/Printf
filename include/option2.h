/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** option2
*/

#ifndef OPTION2_H_
#define OPTION2_H_

#include "./../include/main.h"

int unsigned_integer(char *str, va_list args, int i);
int hexadecimal_low(char *str, va_list args, int i);
int hexadecimal_upp(char *str, va_list args, int i);
int pointer(char *str, va_list args, int i);
int octal(char *str, va_list args, int i);

#endif /* !OPTION2_H_ */
