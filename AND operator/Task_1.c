#include<stdio.h>
int main()
{
	int a=10,b=20,c=40,d=50;

	printf("stmt_1 is a<b:%d\n",a<b);
	printf("stmt_2 is d>c:%d\n",d>c);
	printf("stmt_1 && stmt_2:%d\n",(a<b)&&d>c);
	
	return 0;
}



	