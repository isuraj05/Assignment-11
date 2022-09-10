#include<stdio.h>
#include<conio.h>
int lcm(int,int);
int main()
{
	int a,b,l;
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	l=lcm(a,b);
	printf("LCM of the two numbers is %d",l);
	getch();
}
int lcm(int a, int b)
{
	int l;
	for(l=a>b?a:b;l<=a*b;l++)
	{
	    if(l%a==0&&l%b==0)
		    return l;
	}
}
