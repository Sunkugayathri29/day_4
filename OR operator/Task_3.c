#include<stdio.h>
void main()
{
	int a=98;
	int b=76;
	int c=54;
	int stmt_1=a>b;
	int stmt_2=c>b;

	printf("stmt_1 is a>b:%d\n",a>b);
	printf("stmt_2 is c>b:%d\n",c>b);

	printf("stmt_1 || stmt_2:%d",(a>b)||c>b);

}