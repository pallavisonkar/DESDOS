#include<stdio.h>
#define SIZE 5
int main(void)
{
	int arr[5];
	int i;
	for(i=0;i<SIZE;i++)
	{
		printf("enter values in array\n");
		scanf("%d",&arr[i]);
	}
		printf("array elements are\n");
		for(i=0;i<SIZE;i++)
		{
		printf("%d",arr[i]);
		printf("\n");
		}
		 for(i=0;i<SIZE;i++){


		if(arr[i]%2==0)
		{
		}else
		{
		         printf("number is odd\n");
			 scanf("%d",&arr[i]);
		}
		}
//		printf("even=%d and odd=%d array\n", even,odd);
		return 0;

}	






	
