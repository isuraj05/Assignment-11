#include<stdio.h>
#include<conio.h>
int isPrime(int);
int main()
{
	int p,n;
	printf("Enter a number: ");
	scanf("%d",&n);
	p=isPrime(n);
	if(p==1)
	    printf("It is a prime number");
	else
	    printf("It s not a prime number");
	getch();
}
int isPrime(int n)
{
	int i;
	for(i=2;i<=n/2;i++)
	{
	    if(n%i==0)
		    break;
	}
	if(i==n/2+1)
	    return 1;
	else
	    return 0;	    
}
