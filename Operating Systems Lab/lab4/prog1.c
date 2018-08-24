#include<sys/types.h>
#include<sys/wait.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int status;
	pid_t pid;
	pid=fork();
	if(pid==-1)
		printf("Child not created");
	else if(pid==0)
	{
		printf("I am the child ! \n");
		exit(0);

	}
	else
	{
		wait(&status);
		printf("I am the parent!\n");
		printf("Child returned %d\n",status);

	}
	return 0;
}