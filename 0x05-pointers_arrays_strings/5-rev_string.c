/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	char r = s[0];
	int a = 0;
	int i;

	while (s[a] != '\0')
	a++;
	for (i = 0; i < a; i++)
	{
		a--;
		r = s[i];
		s[i] = s[a];
		s[a] = r;
	}
}
