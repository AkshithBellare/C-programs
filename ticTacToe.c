#include<stdio.h>
#include<stdlib.h>
int player,choice;
char square[10]={'0','1','2','3','4','5','6','7','8','9'};
int checkForWin(char square[]);
void displaySquare();
void markSquare(char);
int main(void)
{ 
	int gameStatus;
	char mark;
	player=1;
	do{
		displaySquare();
		player=(player %  2) ? 1 : 2;
		printf("Player%d Enter your choice: ",player);
		scanf("%d",&choice);
		mark=(player==1) ? 'X' : 'O';
		markSquare(mark);
		displaySquare();
    gameStatus=checkForWin(square);
		++player;
	}while(gameStatus==-1);
}
void markSquare(char mark)
{
	if(choice==1 && square[1]=='1')
		square[1]=mark;
	else if(choice ==2 && square[2]=='2')
		square[2]=mark;
	else if(choice ==3 && square[3]=='3')
		square[3]=mark; 
	else if(choice ==4 && square[4]=='4') 
		square[4]=mark; 
	else if(choice ==5 && square[5]=='5')
		square[5]=mark; 
	else if(choice ==6 && square[6]=='6')
		square[6]=mark; 
	else if(choice ==7 && square[7]=='7')
		square[7]=mark; 
	else if(choice ==8 && square[8]=='8')
		square[8]=mark; 
	else if(choice==9 && square[9]=='9')
		square[9]=mark;
	else
	{
		printf("Invalid move\n");
		player--;
		getchar();
	}
}
void displaySquare()
{
	system("clear");
	printf("____Tic-Tac-Toe____\n");
	printf("______Player1(X) and Player2(O)______\n");
	printf("|    |    |    |\n");
	printf("|  %c |  %c |  %c |\n",square[1],square[2],square[3]);
	printf("|____|____|____|\n"); 
	printf("|    |    |    |\n");
	printf("|  %c |  %c |  %c |\n",square[4],square[5],square[6]);
	printf("|____|____|____|\n"); 
	printf("|    |    |    |\n");
	printf("|  %c |  %c |  %c |\n",square[7],square[8],square[9]);
}
int checkForWin(char square[])
{
	int returnValue=0; 
	if(square[1]==square[2] && square[2]==square[3])
	{printf("Player %d wins",player);
		returnValue=1;}
	else if(square[4]==square[5] && square[5]==square[6])
	{printf("Player %d wins",player);			
		returnValue=1; } 

	else if(square[7]==square[8] && square[8]==square[9])
	{printf("Player %d wins",player);			
		returnValue=1;}  
	else if(square[1]==square[4] && square[4]==square[7])
	{printf("Player %d wins",player);			
		returnValue=1;}  
	else if(square[2]==square[5] && square[5]==square[8])
	{printf("Player %d wins",player);			
		returnValue=1;}  
	else if(square[3]==square[6] && square[6]==square[9])
	{printf("Player %d wins",player);			
		returnValue=1;}   
	else if(square[3]==square[5] && square[5]==square[7])

	{printf("Player %d wins",player);
		returnValue=1;}  
	else if(square[1]==square[5] && square[5]==square[9])
	{
		printf("Player %d wins",player);			
		returnValue=1;
	}  
	else if(square[1]!='1' && square[2]!='2' && square[3]!='3' && square[4]!='4' && square[5]!='5' && square[6]!='6' && square[7]!='7' &&square[8]!='8' && square[9]!='9') 
	{
		printf("Game Drawn!"); 
		returnValue=0;

	}
	else returnValue=-1;
	return returnValue;
}








