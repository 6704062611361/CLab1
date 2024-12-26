#include <stdio.h>
int main()
{
int a;
float b;
char c;
scanf("%d %f %c",&a,&b,&c);
if (a>=2){
	if (b>=2.5)
		printf("approved");
	else 
		printf("not approved\ngrade < 2.50");
	}
else{
	printf("year < 2");
	if (b>=3.00)
		printf("approved");
	else 
		printf("not approved\ngrade < 2.50");
	}
if (c=='N')
	printf("no help");	
}
