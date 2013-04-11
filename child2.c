#include<stdio.h>
#include<stdlib.h>
#include<signal.h>
int N = 5;
int main(void)
{
    pid_t pid[N], wpid;
    int   child_status, i;
    for (i = 0; i < N; i++)
	if ((pid[i] = fork()) == 0)
	{	exit(i);
	    exit(100+i);} /* Child */
    for (i = 0; i < N; i++) {
	printf("\nthe child_status is: %d \n",(int)child_status);
	wpid = wait(&child_status);
	if (WIFEXITED(child_status))
	    printf("Child %d terminated with exit status %d\n",wpid, WEXITSTATUS(child_status));
	else
	    printf("Child %d terminated abnormally\n", wpid);
    }
return 0;
}
