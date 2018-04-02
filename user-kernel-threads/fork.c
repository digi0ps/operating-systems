#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<stdio.h>
#include<sys/wait.h>
void main()
{
pid_t pid;
pid=fork();
if (pid>0)
{
printf("\ncurrent process %d",getpid());
}
else if (pid==0)
{
printf ("\nchild process %d",getpid());
printf("\nmy parent process %d",getppid());
}
else
printf("error");
}
