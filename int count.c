#include<stdio.h>
int main()
{
	int w,count=0;
	scanf("%d",&w);
	while(w!=0)
	{
		w=w/10;
		count++;
	}
	printf("%d",count);
	return 0;
}
