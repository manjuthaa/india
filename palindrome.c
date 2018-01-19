#include <stdio.h>
int main()
{
	int num,temp,digit,reverse=0;
	printf("enter the number");
	scanf("%d",&num);
	temp=num;
	while(temp!=0)
	{
		digit=temp%10;
		temp=temp/10;
		reverse=reverse*10+digit;
	}
	if(num==reverse)
	printf("\n %d is a palindrome",num);
	else
	printf("\n %d is not a palindrome",num);
	return 0;
	
}
