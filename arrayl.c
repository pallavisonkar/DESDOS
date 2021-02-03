#include<stdio.h>
#define MAX 50
int LinearSearch(int arr[],int n,int item);
int main(void)
{
	int i, n, arr[MAX];
	int item,index;
	printf("enter the number of elements");
	scanf("%d",&n);
	printf("enter the  elements");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	printf("enter the item to be searched");
	scanf("%d",&item);
	index=LinearSearch(arr,n,item);
	if(index==-1)
	{
		printf("element is not found %d\n",item);
	}
		
	else
	{
		printf("item is at position %d%d\n",item,index);

		return 0;
	}
}
int LinearSearch(int arr[],int n,int item)
{
	int i=0;
//	int n;
	while( item!=arr[i])
	i++;
	if(i<n)
	{
		return i;
	}	
	else
	{	
		return -1;
		
	}

}








