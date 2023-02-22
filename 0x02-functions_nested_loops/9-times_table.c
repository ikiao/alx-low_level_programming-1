#include "main.h"

/**
  * times_table - Prints the 9 times table, starting with 0
  *
  * Return: empty output
  */
void times_table(void)
{
	int u, y, z, v, d;

	for (u = 0; u <= 9; u++)
	{
		for (y = 0; y <= 9; y++)
		{
			z = u * y;

			if (z > 9)
			{
				v = z % 10;
				d = (z - v) / 10;

				_putchar(44);
				_putchar(32);
				_putchar(d + '0');
				_putchar(u + '0');
			}
			else
			{
				if (y != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}

				_putchar(z + '0');
			}
		}

		_putchar('\n');
	}
}
