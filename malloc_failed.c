#include "monty.h"

/**
 * malloc_failed - Handles the error when malloc fails to allocate memory
 */

void malloc_failed(void)
{
	dprint(2, "Error: malloc failed\n");
	free_arguments();
	exit(EXIT-failure);
}
