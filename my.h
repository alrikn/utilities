/*
** EPITECH PROJECT, 2024
** Header Pool Day 5
** File description:
** Header file for the tasks today
*/
#ifndef COMMON_H
    #include <unistd.h>
    #include <limits.h>
    #include <stdlib.h>
    #define COMMON_H
    #define MAX_INT 2147483647
    #define MIN_INT –2147483648
void my_putchar(char);
int my_putstr(char const *);
int my_strlen(char const *);
char *my_strcpy(char *, char const *);
char *my_strncpy(char *, char const *, int);
int my_strncmp(char const *, char const *, int);
int my_strcmp(char const *, char const *);
char *my_strstr(char *, char const *);
void my_charswap(char *, char *);
char *my_revstr(char *);
int my_strncmp(char const *, char const *, int);
int my_strcmp(char const *, char const *);
int my_str_isalpha(char const *);
int my_str_islower(char const *);
int my_str_isupper(char const *);
int my_str_isnum(char const *);
char *my_strcat(char *, char const *);
int my_compute_power_rec(int, int);
int my_find_prime_sup(int);
int my_getnbr(char const *);
int my_isneg(int);
int my_is_prime(int);
void do_recursive_int_extraction(int);
int my_put_nbr(int);
int my_showmem(char const *, int);
int my_showstr(char const *);
void my_sort_int_array(int *, int);
int check_to_capitalize_next(char *);
char *my_strcapitalize(char *);
int my_str_isprintable(char const *);
char *my_strlowcase(char *);
char *my_strncat(char *, char const *, int);
char *my_strupcase(char *);
void my_swap(int *, int *);
#endif /* COMMON_H */
