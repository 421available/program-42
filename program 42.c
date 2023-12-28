#include<stdio.h>
int*function();
void main()
{
	int * p;
	p=function1();
	printf("%d",p);
	printf("%d",*p);
}
int *function1()
{
	static int x=20;
	return(&x);
}
