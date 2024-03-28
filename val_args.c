#include "monty.h"

/**
 * val_args - checks the number of arguments.
 * @argc: The number of command-line arguments.
 */

void val_args(int argc)
{
	if (argc == 2)
		return;

	dprintf(2, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}
