#ifndef FT_CHECK_H
#define FT_CHECK_H

#include <unistd.h>

int check(int argc);
	if (argc < 1)
	{
		write(1, "File name missing.", 19);
		return 0;
	}
	if (argc > 2)
	{
		write(1, "Too many arguments.", 20);
		return 0;
	}

#endif