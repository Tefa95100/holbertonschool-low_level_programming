#include <unistd.h>

/**
 *
 *
 */
int main(void)
{
	char phrase = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	/*
	 * for (i = 0; phrase[i] != '\0'; i++)
	*	putchar(phrase[i]);
	*/
	write(1, phrase, 50);
	return (1);

}
