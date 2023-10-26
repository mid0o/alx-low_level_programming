#include "main.h"

/**
 * _sqrt_recursion_wrapper - a wrapper that does the recursion bit
 *
 * @n : input number
 * @min: minimum number to guess
 * @max: maximum number to guess
 *
 * Return: square root of @n or -1
*/
int _sqrt_recursion_wrapper(int n, int min, int max)
{
    int guess;  // Declare guess at the beginning of the function

    guess = (min + max) / 2;    /* Get guess (g) */
    int guess_squared = guess * guess;    /* Square guess (sg) */

    if (guess_squared == n)    /* If squared guess == n return guess */
        return guess;
    else if (min == max)    /* This means n doesn't have a perfect square */
        return -1;
    else if (guess_squared < n)    /* Overshoot g if sg is less than the n */
        return _sqrt_recursion_wrapper(n, guess + 1, max);
    else    /* Undershoot g if sg is more than the n */
        return _sqrt_recursion_wrapper(n, min, guess - 1);
}

/**
 * _sqrt_recursion - a function that returns the natural
 *                   square root of a number
 *
 * @n: input number
 *
 * Return: square root
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
	return (-1);
	if (n == 0 || n == 1)
	return n;

	return _sqrt_recursion_wrapper(n, 0, n);
}
