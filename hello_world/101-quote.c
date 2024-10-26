#include <unistd.h>

/**
 *main - entry point of programm
 *Return: return 1
 */
int main(void)
{
	const char *phrase = "and that piece of art is useful\" ";
	const char *phrase2 = "- Dora Korpar, 2015-10-19\n";

	write(1, phrase, 33);
	write(1, phrase2, 26);
	return (1);

}
