#include<stdio.h>
#include<conio.h>
void nPrime(int);
int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	nPrime(n);
	getch();
}
void nPrime(int n)
{
	int i,j,k=1;
	for(i=1;i<=n;i++)
	{
		k++;
		for(j=2;j<=k;j++)
		{
			if(k%j==0)
			    break;
		}
		if(j==k)
		    printf("%d ",k);
		else
		    i--;
	}
}
