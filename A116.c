#include<stdio.h>
#include<conio.h>
void betweenPrime(int,int);
int main()
{
	int a,b;
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	betweenPrime(a,b);
	getch();
}
void betweenPrime(int a,int b)
{
	int i,j;
	for(i=a;i<=b;i++)
	{
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			    break;
		}
		if(j==i/2+1)
		    printf("%d ",i);
	}
}
