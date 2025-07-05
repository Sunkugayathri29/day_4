#include<stdio.h>
int main()
{
	int a=100,b=200,c=300,d=400;

	printf("stmt_1 is a>b:%d\n",a>b);
	printf("stmt_2 is c>d:%d\n",c>d);
	printf("stmt_1 && stmt_2:%d\n",(a>b)&&c>d);
	
	return 0;
}



	