#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
system("clear");
char string[100];
printf("\nEnter a string: ");
gets(string);
char ch;
int character; //The second argument for strchr is to be of type int,the compiler automatically converts character into int.
printf("\nEnter the character to be searched: ");
scanf("%c",&ch);
 character=ch;
//char *getAPointer=strchr(string,ch);
char *getAPointer=strchr(string,character);
if(getAPointer==NULL)
{
printf("\nCHARACTER NOT FOUND\n");
}
else 
printf("\nThe string after the first encounter of the character is: \"%s\"\n ",getAPointer);
}
