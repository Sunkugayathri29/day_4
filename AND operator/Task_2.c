#include<stdio.h>
int main()
{
	int a=10,b=20,c=30,d=40;

	printf("stmt_1 is a<b:%d\n",a<b);
	printf("stmt_2 is c>d:%d\n",c>d);
	printf("stmt_1 && stmt_2:%d\n",(a<b)&&c>d);
	
	return 0;
}



	