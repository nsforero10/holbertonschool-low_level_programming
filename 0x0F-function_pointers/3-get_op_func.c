#include "3-cal.h"
#include <stdio.h>

/**
 * get_op_func - selects the correct function to perform the operation asked by the user
 * @s: char of the operator
 *
 * Return: a pointer to the function
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i;

    i = 0
    while (ops[i])
    {
	    if(ops[i]->op == s)
	    	return (ops[i]->f);
    }
    return (NULL);
}