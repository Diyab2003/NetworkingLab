#include<stdio.h>
#include<unistd.h>
void main() {
pid_t id;
id =fork();
 if(id==0){ 
   printf("Child Process\n");
   printf("Process ID is %d\n",getpid());
   printf("Parent ID is %d\n",getppid());
 }
 else if(id>0){
   wait(NULL);
  printf("Parent process\n");
  printf("Process ID is %d\n",getpid());
  }
 else
   printf("Fork Failed\n");
}
 
