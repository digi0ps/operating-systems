//creating a child from a child
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
wait(NULL);;
printf("\nPARENT PROCESS");
printf("\nProcess id: %d",getpid());
}
else if (pid==0)
{
printf("\nCHILD PROCESS");
int rc;
rc=fork();
if (rc>0)
{
wait(NULL);
printf("\nCHILD PARENT PROCESS");
printf("\nProcess id: %d",getpid());
printf("\nmy parent process %d",getppid());
}
else if (rc==0)
{
printf("\nCHILD CHILD PROCESS");
printf ("\nchild process %d",getpid());
printf("\nmy parent process %d",getppid());
}
}
else
printf("error");
}
