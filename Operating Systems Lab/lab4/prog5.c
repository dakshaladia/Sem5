#include<sys/types.h>
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
void main(){
	int fp = creat("newfile1.txt",444);
	char arr[256];
	printf("Enter content for file:\n");
	gets(arr);
	write(fp,arr,strlen(arr));
	close(fp);
}
