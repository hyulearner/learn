#include <signal.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
	if(kill(atoi(argv[1]), atoi(argv[2])) < 0)
	{
		perror("Unable to kill");
		exit(1);
	}
	return 0;
}
