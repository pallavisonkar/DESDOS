#include<stdio.h>
#define ROW 3
#define COL 4
int main(void)
{
	int mat[ROW] [COL];
	int i,j;
	printf("enter the elements of the matrix(%dx%d) row-wise :\n",ROW,COL);
	for(i=0;i<ROW;i++)
	{	
		for(j=0;j<COL;j++)
			scanf("%d",&mat[i] [j]);
	}
	printf("the matrix of the are\n");
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		printf("%d",mat[i] [j]);
		printf("\n");
	}
	printf("\n");
	return 0;
}	




