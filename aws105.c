#include <stdio.h>
int main()
{
int score,a,b,c;
scanf("%d/%d/%d",&a,&b,&c);
score = a+b+c;
if(score >=80)
	printf("A");
else if (score >=70)
	printf("B %d",80-score);
else if (score >=70)
	printf("C %d",80-score);
else if (score >=70)
	printf("D %d",80-score);
else
	printf("F %d",80-score);
}
