#include<stdio.h>
int main()
{
	int n1;
	int n2;
	printf("n1 n2\n");
	scanf("%d" "%d", &n1, &n2);

	if (n1>n2){
		printf("num1 greater than num2 by ");
		printf("%d",n1-n2);	
	}
	else{
		printf("num2 greater than num1 by ");
		printf("%d",n2-n1);	
	}
}
