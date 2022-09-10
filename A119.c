#include<stdio.h>
#include<conio.h>
int square(int);
int main()
{
	int n,sqr;
	printf("Enter a number: ");
	scanf("%d",&n);
	sqr=square(n);
	printf("Square of the given number is %d",sqr);
	getch();
}
int square(int n)
{
	return n*n;
}
