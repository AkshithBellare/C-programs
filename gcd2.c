#include<stdio.h>                                                                                                          
int gcd(int,int);
int main(void)
{
	int a,b;
	printf("Enter number 1: ");   scanf("%d",&a);
	printf("Enter number 2: ");   scanf("%d",&b);
	printf("\nThe gcd of the two numbers is %d\n",gcd(a,b));
}
int gcd(int a,int b)
{
 if   (b==0)        return a;
 else               return gcd(b,a%b);
}

