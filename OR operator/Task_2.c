#include<stdio.h>
void main()
{
	int a=123;
	int b=456;
	int c=789;
	int stmt_1=a>b;
	int stmt_2=b<c;


	printf("stmt_1 is a>b:%d\n",a>b);
	printf("stmt_2 is b<c:%d\n",b<c);

	printf("stmt_1 || stmt_2:%d",(a>b)||b<c);
}