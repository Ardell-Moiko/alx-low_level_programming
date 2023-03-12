#include "main.h"

/**
 * _abs - check the code
 * @x: the integar to be taken.
 * Return: Always 0.
 */
int _abs(int x)
{

/*av stores the absolute value of x*/
int av;
if (x < 0)
{
av = x * -1;
return (av);
}
return (x);
}
