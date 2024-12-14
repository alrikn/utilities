/*
** EPITECH PROJECT, 2024
** my_ls
** File description:
** my_num_to_str
*/

#include "./../../include/my.h"
#include <stdlib.h>

char *num_is_zero(int num, char *result_str)
{
    if (num == 0) {
        result_str[0] = '0';
        result_str[1] = '\0';
    }
    return result_str;
}

char *num_to_str(int num)
{
    char *result_str = malloc((num_len(num) + 1));
    int i = 0;
    int sign = (num < 0) ? -1 : 1;

    if (result_str == NULL)
        return NULL;
    num_is_zero(num, result_str);
    if (num < 0)
        num *= -1;
    for (; num > 0 || i == 0; i++) {
        result_str[i] = num % 10 + '0';
        num /= 10;
    }
    if (sign < 0) {
        result_str[i] = '-';
    }
    result_str[i] = '\0';
    my_revstr(result_str);
    return result_str;
}
