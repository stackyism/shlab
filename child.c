#include<stdio.h>
#include<stdlib.h>
#include<signal.h>

int main(void) {
   int child_status;  

   if (fork() == 0)
      printf("hello from child\n");
   else {
      printf("hello from parent\n");
     	printf("\n %d \n", child_status);
	 //wait(&child_status);
      printf("child has terminated\n");
   }
   printf("Bye\n");
   exit(0);
}
