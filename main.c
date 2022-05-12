#include "monty.h"

int main (int argc, char **argv)
{
    FILE *stream;
    char *line = NULL;
    size_t len = 0;
    ssize_t nread;
    stack_t *head = NULL;
    char *arg1, *arg2;
    int val, count = 1;

    if (argc != 2)
    {
        fprintf(stderr, "USAGE: monty file\n");
        exit (EXIT_FAILURE);
    }
    stream = fopen(argv[1], "r");
    if (stream == NULL) 
    {
        fprintf(stderr, "Error: Can't open file <%s>\n", argv[1]);
        exit (EXIT_FAILURE);
    }
    while ((nread = getline(&line, &len, stream)) != -1) 
    {
            arg1 = strtok(line, " \n");
            arg2 = strtok(NULL, " \n");
            val = verifier(arg1, arg2);
            if (val == -1)
            {
                fprintf(stderr, "L<%d>: usage: push integer\n", count);
                free(line);
                free_list(head);
                fclose(stream);
                exit (EXIT_FAILURE);
            }
            if (val == -2)
            {
                fprintf(stderr, "L<%d>: unknown instruction <opcode>\n", count);
                free(line);
                free_list(head);
                fclose(stream);
                exit(EXIT_FAILURE);
            }
            head = diverter(head, arg1, val);
            count++;
    }

    free(line);
    free_list(head);
    fclose(stream);
    exit(EXIT_SUCCESS);
}