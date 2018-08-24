#include<sys/types.h>
#include<sys/wait.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
	int status;
	pid_t pid;
	pid=fork();
	if(pid<0)
		printf("Child not created");
	else if(pid==0)
	{
		execlp("./p1","p1",NULL);

	}
	else
	{
		wait(NULL);
	//	printf("I am the parent!\n");
		printf("Child complete");
		exit(0);

	}
	return 0;
}