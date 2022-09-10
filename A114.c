#include<stdio.h>
#include<conio.h>
int nextPrime(int);
int main()
{
	int p,n;
	printf("Enter a number: ");
	scanf("%d",&n);
	p=nextPrime(n);
	printf("Next prime number is %d",p);													
	getch();
}
int nextPrime(int n)
{
	int i,j;
	for(i=2;i<=n+1;n++)
	{
	    for(j=2;j<=(n+1)/2;j++)
	    {
	    	if((n+1)%j==0)
	    	    break;
		}
		if(j==(n+1)/2+1)
		    return n+1;
	}
}
