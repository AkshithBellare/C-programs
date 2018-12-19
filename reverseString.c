#include<string.h>
#include<stdio.h>
int reverse(char []);
int main(void)
{
char string[100];
printf("Enter the string to be reversed: ");
scanf("%s",string);
int i;
printf("The reverse string is : ");
for(i=strlen(string)-1;i>=0;i--)
    printf("%c",string[i]);
}
