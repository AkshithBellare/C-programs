#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int stringLength(char []);
void stringAdd(char [],char []);
int stringCompare(char [],char []);
int main()
{
	int task;
	printf("\nEnter the number corresponding to the task\n");
	printf("1.Find the length of a string\n2.Concatenate two strings\n3.Compare two strings\n");
	scanf("%d",&task);
	char findLength[100];
	char string1[100];
	char string2[100];
	char result[200];
	switch(task)
	{
		case 1:system("clear"); 
					 printf("\nEnter the string you want to find length of: ");
					 scanf("%s",findLength);
					 printf("The length of the string is %d\n",stringLength(findLength));
					 break;
		case 2:system("clear");
					 printf("\nEnter the first string : ");
					 scanf("%s",string1);
					 printf("\nEnter the second string : ");
					 scanf("%s",string2);
					 stringAdd(string1,string2);
					 printf("\nThe resulting string is : %s\n",string1);
					 break;
		case 3:system("clear");
					 printf("\nEnter the two strings you want to compare\n ");
					 printf("\n1. string1 : ");
					 scanf("%s",string1);
					 printf("\n2. string2 : ");
					 scanf("%s",string2);
					 printf("\nThe two strings %s equal\n",stringCompare(string1,string2)?"are":"aren't");
	}


}
int stringLength(char buf[])
{
	int i;
	for(i=0;buf[i]!='\0';i++);
	return i;
}
void stringAdd(char buf1[],char buf2[])
{
	int l2=stringLength(buf2);
	int l1=stringLength(buf1);
	for(int i=0;i<l2;i++)
	{
		buf1[i+l1]=buf2[i];
	}
}
int stringCompare(char buf1[],char buf2[])
{
	int i;
	int length=stringLength(buf1);
	if(length==stringLength(buf2))
	{
		for(i=0;i<length;i++)
		{
			if(buf1[i]==buf2[i])
				continue;
			else break;
		}
	}
else return 0;
	if(i==length)
       return 1;
  else return 0;

}
