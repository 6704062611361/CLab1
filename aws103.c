#include<stdio.h>
main(){
	int h,m;
	scanf("%d:%d",&h,&m);
	m=m+(h*60);
	if(m>=430&&m<=570)
		printf("Y");
	else
		printf("N");
}
