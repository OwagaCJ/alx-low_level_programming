#include <stdio.h>
#include <unistd.h>

/**
 * main - program that prints statement to the standard error
 * do not use printf or puts
 * Return: 0 (Success)
 */

int main(void)

{

write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);

return (1);
}
