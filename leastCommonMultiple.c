#include<stdio.h>
int gcd(int,int);   //lcm is the smallest number that is divisible by both the numbers
int lcm(int,int);
int main(void)
{
int num1,num2;
printf("Enter number 1: ");   scanf("%d",&num1); 
printf("Enter number 2: ");   scanf("%d",&num2);
printf("The least common multiple of the two numbers is %d",lcm(num1,num2));
}
int lcm(int a,int b) 
{
 return (a*b)/gcd(a,b);       //using the formula lcm=(product)/gcd.                                                                     
}
int gcd(int a,int b)
{
if(b==0)     
     return a;
else 
     return (b,a%b);
}

