/*
 *git test
 * 
 * 
 */


#include <stdio.h>


void 
board(int board1[])
{
	
	for(int i=0; i<4; i++)
	{
		printf("[%c]",board1[i]);
	}
	printf("\n");
	for(int i=0; i<4; i++)
	{
		printf("[%d]",i);
	}
	printf("\n");
	
}
void
fillboard(int board1[])
{	
	char couleur[];
	int chiffre;	
	printf("\nEntrez un chiffre");
	scanf("%d", &chiffre);
	printf("\n Couleur:");
	scanf("%s", &couleur);
	board1[chiffre]='#';
	
}

int main(int argc, char **argv)
{
	int board1[4]={' ',' ',' ',' '};
	board(board1);
	fillboard(board1);
	board(board1);
	return 0;
}

