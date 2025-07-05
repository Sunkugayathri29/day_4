#include<stdio.h>
int main()
{
	int a,b,c;
	int stmt_1=a<b;
	int stmt_2=b>c;

	printf("enter the value of a:");
	scanf("%d",&a);

	printf("enter the value of b:");
	scanf("%d",&b);	

	printf("enter the value of c:");
	scanf("%d",&c);

	printf("stmt_1 || stmt_2:%d",(a<b)||b>c);

	return 1;

}