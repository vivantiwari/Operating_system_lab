#include<stdio.h>
int factorial(int num){
	if(num==0 || num==1){
		return 1;
	}else{
		return num*factorial(num-1);
	}
}
int main(){
	int n,ans;
	printf("enter a number: ");
	scanf("%d",&n);
	if(n<0){
		printf("number is negative\n");
	}else{
		ans=factorial(n);
		printf("factorial of %d is %d\n",n,ans);
	}
	return 0;
}
