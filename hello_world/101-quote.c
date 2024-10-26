#include <unistd.h>

/**
 *
 *
 */
int main(void)
{
	const char *phrase = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, phrase, 59);
	return (1);

}
