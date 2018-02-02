#include<stdio.h>
int main()
{
	int num,reverse=0,digit;
	printf("enter the numbr\t");
	scanf("%d",&num);
	while(num!=0)
	{
		digit=num%10;
		num=num/10;
		reverse=reverse*10+digit;
			}
			printf("reverse is %d",reverse);
			return 0;
}
