#include <stdio.h>
int main() {
	int A[3][3]={{1,2,3}, {4,5,6},{7,8,9}};
	int B[2][3]={{5,6,7}, {8,9,10}};
	int T[5][6];
	
	int i,j;
	//input to C
	
	/*for(i=0;i<5;i++) {
		for(j=0;j<6;j++) {
			printf("T[%d][%d]: ",i,j);
			scanf("%d",&[i][j]);
		}
	}
	*/
	
	//input to T
	int a,b,c,d,f,g;
	for (i=0;i<5;i++){
		
		scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&f,&g);
		T[i][0]=a;
		T[i][1]=b;
		T[i][2]=c;
		T[i][3]=d;
		T[i][4]=f;
		T[i][5]=g;
	}
	//output from T
	printf("\n");
	for(i=0;i<5;i++) {
		for(j=0;j<6;j++) {
			printf("%d ",T[i][j]);
		}
		printf("\n");
	}
}
/*1 2 3 4 5 6
6 5 4 3 2 1
2 3 4 5 6 7
7 6 5 4 3 2
3 4 5 6 7 8*/

