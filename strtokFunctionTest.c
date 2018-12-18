#include<stdio.h>
#include<string.h>
int main()
{
char string[]="Hello- My- name- is- Mark- Zuckerberg";
char token[2]="-";
char *tokenPointer;
tokenPointer=strtok(string,token);
int i=1;
while(tokenPointer!=NULL)
{
printf("%d: %s\n",i,tokenPointer);
tokenPointer=strtok(NULL,token);
i++;
}
}
