#include<stdio.h>
#include<conio.h>
void fibonacci(int);
int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	fibonacci(n);
	getch();
}
void fibonacci(int n)
{
	int a,b,fib,i;
	for(a=-1,b=1,i=1;i<=n;i++)
	{
		fib=a+b;
		printf("%d ",fib);
		a=b;
		b=fib;
	}
}
