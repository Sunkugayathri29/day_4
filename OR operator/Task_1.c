#include<stdio.h>
int main()
{
	int a=200;
	int b=300;
	int c=400;
	int d=100;
	int stmt_1=a<b;
	int stmt_2=c>d;

	printf("stmt_1 is a<b:%d\n",a<b);	
	printf("stmt_2 is c>d:%d\n",c>d);
	
	printf("stmt_1 || stmt_2:%d",(a<b)||c>d);

	return 1;
}