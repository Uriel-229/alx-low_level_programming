#include <stdio.h>
#include <time.h>

/*
 * main - determine a last digit
 *
 * Description: program will assign a random number to the variable n each time
 * it is executed
 *
 * Return: Always 0 (success)
 */

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n == 0)
printf("%d Last digit of and is 0\n", n);
else if (n > 5)
printf("%d Last digit of and is greater than 5\n", n);
else
(n < 6)
printf("%d Last digit of and is less than 6 and not 0\n", n);
return (0);
}
