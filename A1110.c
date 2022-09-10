#include<stdio.h>
#include<conio.h>
int factorial(int);
int sumFact(int);
int main()
{
	int f,n,s;
	printf("Enter a number: ");
	scanf("%d",&n);
	f=factorial(n);
	printf("Factorial of the given number is %d\n",f);
	
	s=sumFact(n);
	printf("\nSum of the series is %d",s);
	getch();
}

int factorial(int n)
{
	int i,fact;
	for(fact=1,i=1;i<=n;i++)
	    fact=fact*i;
	return fact;
}

int sumFact(n)
{
	int i,sum;
	for(sum=0,i=1;i<=n;i++)
		sum=sum+factorial(i)/i;
	return sum;
}
