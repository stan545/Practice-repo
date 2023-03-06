#include <stdio.h>
#include <unistd.h>

int main()
{
	pid_t my_pid;

	my_pid = getpid();
	printf("%u\n", my_pid);
	return (0);
}

