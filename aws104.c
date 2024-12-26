#include<stdio.h>
main(){
	int a,b,c,d;
    int max = 0 ;
    
    scanf("%d/%d/%d/%d",&a,&b,&c,&d);
	max = (a>b && a>c && a>d ) ? a : (b>a && b>c && b>d ) ? b : (c>a && c>b && c>d ) ? c : d;
	printf("%d",max);
}
