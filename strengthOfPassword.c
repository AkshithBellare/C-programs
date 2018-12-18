#include<stdio.h>
#include<string.h>
#include<ctype.h>
int passwordLength(char password[]);
int specialCharacter(char password[]);
int lowerCase(char password[]);
int upperCase(char password[]);
int numbers(char password[]);
int main(void)
{
	char password[500];
	printf("\nYour password must be atleast 8 characters long and must contain atleast one special character,one number ,one uppercase and one lowercase letter\n");
ask: printf("\nEnter your password: ");
		 gets(password);
		 if(passwordLength(password) && specialCharacter(password) && lowerCase(password) && upperCase(password) && numbers(password))
			 printf("\nYour password has been accepted\n");
		 else 
		 {
			 system("clear");
			 printf("\nINVALID PASSWORD\n");
       goto ask;
		 }
}
int passwordLength(char p[])
{
	int l=strlen(p);
	if(strlen(p)<=8)
		return 0;
	else return l;
}
int specialCharacter(char p[])
{
	int specialCharacterCount=0;
	for(int i=0;i<strlen(p);i++)
	{
		if(ispunct(p[i]))
			specialCharacterCount++;
	}
	return specialCharacterCount;
}

int lowerCase(char p[])
{
	int lowerCaseCount=0;	
	for(int i=0;i<strlen(p);i++)
	{
		if(islower(p[i]))
			lowerCaseCount++;
	}
	return lowerCaseCount;
}
int upperCase(char p[])
{
	int upperCaseCount=0;
	for(int i=0;i<strlen(p);i++)
	{
		if(isupper(p[i]))
			upperCaseCount++;
	}
	return upperCaseCount;
}
int numbers(char p[])
{
	int numberCount=0;
	for(int i=0;i<strlen(p);i++)
	{
		if(isdigit(p[i]))
			numberCount++;
	}
	return numberCount;
}


