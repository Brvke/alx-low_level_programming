#include "function_pointers.h"
/**
* main - entry
* @argv: argument value
* @argc: argument count
*/
int main(int argc, char *argv[])
{
    int num1, num2;
    char operator;

    operator = *argv[2];
    if (argc != 4)
    {
        printf("argc is %d\n", argc);
        exit (98);
    }
    else if (operator != 43 || operator != 45 || operator != 42 || operator != 47 || operator != 37)
    {
        printf("%c is an invalid operator", operator);
        exit (99);
    }
    num1 = atoi(argv[1]);
    num2 = atoi(argv[3]);
    printf("num1 is %d\n", num1);
    printf("num2 is %d\n", num2);
    return(0);
}
