#include<stdio.h>
int main()
{
	int n1;
	scanf("%d", &n1);
	int n2;
	scanf("%d", &n2);
	if (n1>n2){
		printf("n1 greater than n2 by ");
		printf("%d",n1-n2);	
	}
	else{
		printf("n2 greater than n1 by ");
		printf("%d",n2-n1);	
	}
}
