#include<stdio.h>
int gcd(int,int);
int main(void)
{
	int a,b;
	printf("Enter number 1: ");
	scanf("%d",&a);
	printf("Enter number 2: ");
	scanf("%d",&b);
	printf("\nThe gcd of the two numbers is %d\n",gcd(a,b));
}
int gcd(int a,int b)
{
	if(a==b)  return a;
	if(a>b)   return gcd(a-b,b);
	else      return gcd(a,b-a);
}

