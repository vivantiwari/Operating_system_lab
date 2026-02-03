#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>

int main(){
	pid_t pid;
	printf("Parent Process Started\n");
	printf("Parent PID : %d\n",getpid());
	pid=fork();
	if(pid<0){
		printf("Process Creation Failed\n");
	}else if(pid==0){
		printf("\nHello I am Child 1\n");
		printf("My child PID is %d\n",getpid());
		printf("My parent PID is %d\n",getppid());
		execl("/bin/ls","ls","-1",NULL);
		printf("Exxec failed\n");
	}else{
		wait(NULL);
		printf("\nChild process completed\n");
		printf("Parent process existing\n");
	}
	
	pid=fork();
	if(pid<0){
		printf("Process Creation Failed\n");
	}else if(pid==0){
		printf("\nHello I am Child 2\n");
		printf("My child PID is %d\n",getpid());
		printf("My parent PID is %d\n",getppid());
		execl("/bin/ls","ls","-1",NULL);
		printf("Exxec failed\n");
	}else{
		wait(NULL);
		printf("\nChild process completed\n");
		printf("Parent process existing\n");
	}

	pid=fork();
	if(pid<0){
		printf("Process Creation Failed\n");
	}else if(pid==0){
		printf("\nHello I am Child 3\n");
		printf("My child PID is %d\n",getpid());
		printf("My parent PID is %d\n",getppid());
		execl("/bin/ls","ls","-1",NULL);
		printf("Exxec failed\n");
	}else{
		wait(NULL);
		printf("\nChild process completed\n");
		printf("Parent process existing\n");
	}
	
	pid=fork();
	if(pid<0){
		printf("Process Creation Failed\n");
	}else if(pid==0){
		printf("Hello I am Child 4\n");
		printf("My child PID is %d\n",getpid());
		printf("My parent PID is %d\n",getppid());
		execl("/bin/ls","ls","-1",NULL);
		printf("Exxec failed\n");
	}else{
		wait(NULL);
		printf("\nChild process completed\n");
		printf("Parent process existing\n");
	}

	pid=fork();
	if(pid<0){
		printf("Process Creation Failed\n");
	}else if(pid==0){
		printf("Hello I am Child 5\n");
		printf("My child PID is %d\n",getpid());
		printf("My parent PID is %d\n",getppid());
		execl("/bin/ls","ls","-1",NULL);
		printf("Exxec failed\n");
	}else{
		wait(NULL);
		printf("\nChild process completed\n");
		printf("Parent process existing\n");
	}
	return 0;
}
