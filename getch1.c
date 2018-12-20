#include<stdio.h>
#include<ctype.h>
int main()
{
int n;
printf("Enter a number: ");
scanf("%d",&n);
if(!(0<n<9))
  printf("Invalid move");
getchar();
}
