#include "main.h"

/**
* print_square - prints a square follwed by a new line
* size: dimension
*/

void print_square(int size)

{

		int i, j;



			if (size <= 0)

					{

								_putchar('\n');

									}

				else

						{

									for (i = 1; i <= size; i++)

												{

																for (j = 1; j <= size; j++)

																				{

																									_putchar('#');

																												}

																			_putchar('\n');

																					}

										}

}
