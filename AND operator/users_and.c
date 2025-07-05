#include<stdio.h>
int main()
{
	int a;
	int b;
	int c;
	int d;
	int stmt_1;
	int stmt_2;
	printf("enter the value of a:");
	scanf("%d",&a);
	printf("enter the value of b:");
	scanf("%d",&b);
	printf("enter the value of c:");
	scanf("%d",&c);
	printf("enter the value of d:");
	scanf("%d",&d);
	
	stmt_1=a<b;
	stmt_2=c>d;

	printf("out put of stmt_1:%d\n",stmt_1);
	printf("out put of stmt_2:%d\n",stmt_2);
	printf("stmt_1 && stmt_2:%d",a<b && c>d);

	return 1;
}

	
	

	
