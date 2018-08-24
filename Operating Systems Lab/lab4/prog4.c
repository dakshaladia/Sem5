
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
		printf("I am the child wohoo and my pid is :%d ! \n",getpid());
		exit(0);

	}
	else
	{   sleep(5);
		//wait(&status);
		printf("I am the parent bleh!\n");
		//printf("Child returned %d\n",status);

	}
	return 0;
}