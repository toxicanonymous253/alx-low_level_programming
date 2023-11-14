/**
 * _strlen - a function
 * @s: a character
 * Return: a number
 */
int _strlen(char *s)
{
	int count  = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
