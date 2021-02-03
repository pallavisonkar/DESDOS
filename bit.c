#include<stdio.h>
void displayBits(int x);
int main(void)
{
	int a,b;
	printf("enter values for a and b in hexadecimal:");
	scanf("%x%x",&a,&b);
	printf("a=%x\n",a);       
	printf("b=%x\n",b);   
	printf("a&b=%x\n",a&b); 
      	
	printf("a|b=%x\n",a|b);  
	printf("a^b=%x\n",a^b);   
	printf("~a=%x\n",~a);     
	printf("~b=%x\n",~b);    
	
}	
void displayBits(int x)
{
	int a,b;
	displayBits(a);
	displayBits(b);
	displayBits(a&b);
	displayBits(a|b);
	displayBits(a^b);
	displayBits(~a);
	displayBits(~b);
//	return bits;
}	
