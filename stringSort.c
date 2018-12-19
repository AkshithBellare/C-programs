#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(void)
{
	char stringMatrix[100][100];
	char temp[100];
	int number;
	printf("\nEnter the number of strings you want to sort : ");
	scanf("%d",&number);
	printf("\nOkay,Enter the strings one by one :) \n");
	for(int i=0;i<number;i++)
		scanf("%s",stringMatrix[i]);
	for(int i=number-1;i>=0;i--)
		for(int j=0;j<i;j++)
		{
			if(strcmp(stringMatrix[j],stringMatrix[j+1])>0)
			{
				strcpy(temp,stringMatrix[j]);
				strcpy(stringMatrix[j],stringMatrix[j+1]);
				strcpy(stringMatrix[j+1],temp);
			}
			else continue;
		}
	printf("\nThe strings after sorting\n ");
	for(int i=0;i<number;i++)
	{
		printf("%d . %s\n",i+1,stringMatrix[i]);
	}
}
