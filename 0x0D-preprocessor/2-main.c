#include <stdio.h>

#ifndef __FILE__

#define __FILE__

#endif

int main(void)
{
	printf("File: %s\n", __FILE__);

	return(0);
}
