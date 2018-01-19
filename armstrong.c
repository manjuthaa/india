#include <stdio.h>
int main()
{
	int num,temp,digit,sum=0;
	printf("enter the number");
	scanf("%d",&num);
	temp=num;
	while(temp!=0)
	{
		digit=temp%10;
		sum=sum+digit*digit*digit;
		temp=temp/10;
	}
	if(num==sum)
	printf("%d is an armstrong ",num);
	else
	printf("%d is not an armstrong", num);
	return 0;
	}
