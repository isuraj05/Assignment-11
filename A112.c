#include<stdio.h>
#include<conio.h>
int hcf(int,int);
int main()
{
	int a,b,h;
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	h=hcf(a,b);
	printf("HCF of the two numbers is %d",h);
	getch();
}
int hcf(int a, int b)
{
	int h;
	for(h=a<b?a:b;h<=a*b;h--)
	{
	    if(a%h==0&&b%h==0)
		    return h;
	}
}
