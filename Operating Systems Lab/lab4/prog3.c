#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
	 pid_t pid=fork();
	 if(pid<0)
	 {
	 	printf("Child process not created");
     }
     if(pid==0)
     {   
     	printf("I am the child\n");
     	printf("child id: %d\n",getpid());

     }
     else
     {
     	wait(NULL);
     	printf("I am the parent\n");
     	printf("Parent id: %d\n",getpid());
     }
     return 0;
}