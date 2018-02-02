#include <stdio.h>
int main()
{
	int numbers[10],num,i,min;
	printf("enter the number in the set (min 10)\t");
	scanf("%d",&num);
	printf("enter the numbers\n");
	for(i=0;i<num;i++)
	scanf("%d",&numbers[i]);
	min=numbers[0];
	for(i=1;i<num;i++)
	if(numbers[i]<min)
	min=numbers[i];
	printf("maxminum number is:%d",min);
	return 0;
}
