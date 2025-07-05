#include<stdio.h>
void main()
{
	int a=1;
	int b=2;
	
	printf("stmt_1 is:%d\n",a<b);

	int stmt_2=!(a<b);

	printf("out put =%d",stmt_2);

}