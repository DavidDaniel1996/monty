#include "monty.h"

int verifier(char *arg1, char *arg2)
{
    int idx;
    int val;
    char buffer[100];
    char *array[] = {
        "push",
        "pall"};

    for (idx = 0; idx < 2; idx++)
    {
        if (strcmp(arg1, array[idx]) == 0)
        {
            if (strcmp(arg1, "push") == 0)
            {
                val = atoi(arg2);
                sprintf(buffer, "%d", val);
                if (strcmp(buffer, arg2) == 0)
                {
                    return (val);
                }
                else
                {
                    return (-1);
                }
            }
            return (0);
        }
    }
    return (-2);
}