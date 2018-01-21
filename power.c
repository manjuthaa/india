#include <stdio.h>

int main(void) {
int base,e,i,power;
printf("enter base:");
scanf("%d",&base);
printf("enter the exponent");
scanf("%d",&e);
power=1;
for(i=1;i<e;i++)
power=power*base;
printf("power:%d",power);
return 0;
}
