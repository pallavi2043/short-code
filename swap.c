#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the value of a and b");
	scanf("%d%d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("after Swapping the value of a is %d & b is %d\n",a,b );
	return 0;
}