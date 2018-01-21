#include <stdio.h>

int main(void) {
	int n,i;
	printf("\n give the number :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d \t",n*i);
	}
	return 0;
}
