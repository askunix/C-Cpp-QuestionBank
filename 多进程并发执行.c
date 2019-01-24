//ex3.c
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
	int pid1,pid2,i=1;
	while((pid1=fork())==-1);
	pid1=fork();
	if(pid1==0)
         {
	printf("This is child1,pid=%d,my parent's pid=%d\n",getpid(),getppid());
        sleep(1);
        for(i='A';i<='C';i++)
          { 
            printf("Child1 print, %c\n",i);
            sleep(1);
          }
          exit(0);
        }
    else {
       while((pid2=fork())==-1);
	   pid2=fork();
	if(pid2==0)
         {
	printf("This is child2,pid=%d,my parent's pid=%d\n",getpid(),getppid());
          sleep(1);
        for(i='a';i<='c';i++)
          { 
            printf("Child2 print,%c\n",i);
            sleep(1);
          }
          exit(0);
        }
     else 
       {
	  wait(0);
          wait(0);
          printf("This is parent process,pid=%d",getpid());
	  sleep(1);		  
          for(i=1;i<=3;i++)
            { 
	     printf("Parent print: %d\n",i);
            sleep(1);
            
            } exit(0);
        }
   }
  }


