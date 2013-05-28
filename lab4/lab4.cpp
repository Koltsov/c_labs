// lab4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "conio.h"
#include <stdlib.h>
#include <string.h>
#define n 100


void main ()
{
	char s1[n], s2[n], zam, men, tmp;
	printf("Type a string... \n");
	gets(s1);
	puts(s1);
	int i, l=strlen(s1);
	printf("l=%i \n",l);
	printf("input new symbol and symbol that you want to change: \n");
	scanf("%c %c",&zam,&men);
	printf("\n new=%c	old=%c \n",zam,men);
	for (i=0;i<l;i++)
	{
		if (s1[i]==men)
		{
			printf("\n Type 'yes' if you want to change the (%i) symbol or anything else if not: ",i);
			scanf("%c",&tmp);			
			gets(s2);
			if (s2[0]='y' && s2[1]=='e' && s2[2]=='s')
				s1[i]=zam;
			else 
				continue;			
		}
	}
	printf("The result is: \n");
	puts(s1);
	system("Pause");
}

