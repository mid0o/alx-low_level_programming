#include "main.h"

/**
 *  * print_times_table - prints the n times table, starting with 0
 *   * @n: The number for which to print the times table
 *    */
void print_times_table(int n)
{
	    if (n < 0 || n > 15)
		            return;

	        int i, j, product;

		    for (i = 0; i <= n; i++)
			        {
					        for (j = 0; j <= n; j++)
							        {
									            product = i * j;

										                if (j == 0)
													            {
															                    _putchar('0');
																	                }
												            else
														                {
																	                _putchar(',');
																			                _putchar(' ');

																					                if (product < 10)
																								                {
																											                    _putchar(' ');
																													                        _putchar(' ');
																																                }
																							                else if (product < 100)
																										                {
																													                    _putchar(' ');
																															                    }

																									                _putchar((product / 100) + '0');
																											                _putchar((product / 10) % 10 + '0');
																													                _putchar((product % 10) + '0');
																															            }
													            }
						        _putchar('\n');
							    }
}
