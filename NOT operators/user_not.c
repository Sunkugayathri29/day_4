#include<stdio.h>
void main()
{
	int a,b;
	
	printf("Enter the value of a:");
	scanf("%d",&a);

	printf("Enter the value of b:");
	scanf("%d",&b);

	printf("stmt_1 :%d\n",a<b);

	int stmt_2=!(a<b);

	printf("out put :%d",stmt_2);

}