#include <stdio.h>

int main()
{
	int a,n,fact=1;
	printf("enter the numbers \n");
	scanf("%d",&n);
	for(a=1;a<=n;a++)
	fact=fact*a;
	printf(" factorial of %d=%d \n",n,fact);
	return 0;
}
