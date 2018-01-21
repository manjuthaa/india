#include <stdio.h>

int main(void) {
	int num,m=20,n=40;
	printf("print even no in a given range\n");
	for(num=m;num<=n;num++)
	{
		if(num%2==0)
		printf("\n%d",num);
	}
	return 0;
}
