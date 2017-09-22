/* file: assembler.c								*/
/* author: Dan (email: d.plamadeala@student.rug.nl)	*/
/* date: 2017/09/22 00:54:28						*/
/* version: 1.0										*/
/* Description:	This program simulates a small		*/
/* hypothetical processor with 8 assmebly			*/
/* instructions and 2 registers.					*/

#include <stdio.h>
#include <stdlib.h>

char c;			//char for storing unneeded chars like R

void OUT(int *R1, int *R2)
{
	int r;
	scanf(" %c%d", &c, &r);
	if (r == 1)
		printf("%d\n", (*R1));
	else if (r == 2)
		printf("%d\n", (*R2));
}

void LCS(int *R1, int *R2)
{
	int r;
	scanf(" %c%d", &c, &r);
	if (r == 1)
		scanf("%d", R1);
	else if (r == 2)
		scanf("%d", R2);
}

void INC(int *R1, int *R2)
{
	int r;
	scanf(" %c%d", &c, &r);
	if (r == 1)
		(*R1)++;
	else if (r == 2)
		(*R2)++;
}

void DEC(int *R1, int *R2)
{
	int r;
	scanf(" %c%d", &c, &r);
	if (r == 1)
		(*R1)--;
	else if (r == 2)
		(*R2)--;
}

void ADD(int *R1, int *R2)
{
	int r1, r2;
	scanf(" %c%d %c%d", &c, &r1, &c, &r2);
	if (r1 == 1 && r2 == 1)
		(*R1) += (*R1);
	else if (r1 == 2 && r2 == 2)
		(*R2) += (*R2);
	else if (r1 == 1 && r2 == 2)
		(*R2) += (*R1);
	else if (r1 == 2 && r2 == 1)
		(*R1) += (*R2);
}

void SUB(int *R1, int *R2)
{
	int r1, r2;
	scanf(" %c%d %c%d", &c, &r1, &c, &r2);
	if (r1 == 1 && r2 == 1)
		(*R1) -= (*R1);
	else if (r1 == 2 && r2 == 2)
		(*R2) -= (*R2);
	else if (r1 == 1 && r2 == 2)
		(*R2) -= (*R1);
	else if (r1 == 2 && r2 == 1)
		(*R1) -= (*R2);
}

void MUL(int *R1, int *R2)
{
	int r1, r2;
	scanf(" %c%d %c%d", &c, &r1, &c, &r2);
	if (r1 == 1 && r2 == 1)
		(*R1) *= (*R1);
	else if (r1 == 2 && r2 == 2)
		(*R2) *= (*R2);
	else if (r1 == 1 && r2 == 2)
		(*R2) *= (*R1);
	else if (r1 == 2 && r2 == 1)
		(*R1) *= (*R2);
}

int checkInput(char c1, char c2, char c3, int *R1, int *R2)
{
	if (c1 == 'O' && c2 == 'U' && c3 == 'T')
		OUT(R1, R2);
	else if (c1 == 'L' && c2 == 'C' && c3 == 'S')
		LCS(R1, R2);
	else if (c1 == 'I' && c2 == 'N' && c3 == 'C')
		INC(R1, R2);
	else if (c1 == 'D' && c2 == 'E' && c3 == 'C')
		DEC(R1, R2);
	else if (c1 == 'A' && c2 == 'D' && c3 == 'D')
		ADD(R1, R2);
	else if (c1 == 'S' && c2 == 'U' && c3 == 'B')
		SUB(R1, R2);
	else if (c1 == 'M' && c2 == 'U' && c3 == 'L')
		MUL(R1, R2);
	else if (c1 == 'E' && c2 == 'N' && c3 == 'D')
		return (1);
	return (0);
}

int	main(int argc, char *argv[])
{
	char c1, c2, c3;
	int R1 = 0, R2 = 0;
	while (!checkInput(c1, c2, c3, &R1, &R2))
		scanf(" %c%c%c", &c1, &c2, &c3);
	return (0);
}