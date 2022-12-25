/*
 * Mastermind.c
 * 
 * Copyright 2022 Felipe Zani <felipe@C3PO>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by	
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
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

