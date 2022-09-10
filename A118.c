#include<stdio.h>
#include<conio.h>
int combi(int,int);
int factorial(int);
void pascal(int);
int main()
{
	int n,r;
	printf("Enter two values: ");
	scanf("%d%d",&n,&r);
	factorial(n);
	combi(n,r);
	pascal(n);
	getch();
}

int factorial(int n)
{
	int f=1,i;
	for(i=1;i<=n;i++)
		f=f*i;
	return f;
}

int combi(int n,int r)
{
	return factorial(n)/(factorial(r)*factorial(n-r));
}

void pascal(int n)
{
	int i,j;
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=i;j++)
			printf("%d  ",combi(i,j));	
		printf("\n");
	}
}
