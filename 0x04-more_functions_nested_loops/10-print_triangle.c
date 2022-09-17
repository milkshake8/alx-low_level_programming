/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size : the size of the triangle.
 *
*/
void print_triangle(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int i, j, k = size - 1;

		for (i = 0; i < size ; i++)
		{
			for (j = 0; j < size  ; j++)
			{
				if (j >= k)
					putchar('#');
				else
					putchar(' ');
			}
			putchar('\n');
			k--;
		}
	}
}
