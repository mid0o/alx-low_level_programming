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
int _sqrt_recursion_helper(int n, int min, int max)
{
    int guess;
    
    if (min > max) {
        return (-1);
    }

    guess = (min + max) / 2;
    int guess_squared = guess * guess;

    if (guess_squared == n) {
        return guess;
    } else if (guess_squared > n) {
        return _sqrt_recursion_helper(n, min, guess - 1);
    } else {
        return _sqrt_recursion_helper(n, guess + 1, max);
    }
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
    if (n < 0) {
        return (-1);
    }
    if (n == 0 || n == 1) {
        return (n);
    }

    return _sqrt_recursion_helper(n, 0, n);
}
