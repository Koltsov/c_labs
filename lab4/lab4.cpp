// lab4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "conio.h"
#include <stdlib.h>
#include <string.h>
#define n 100


void main ()
{
	char s1[n], s2[n], zam, men, opana;
	gets(s1);
	puts(s1);
	int i, l=strlen(s1);
	printf("l=%i",l);
	printf("input zam and men:");
	scanf("%c %c",&zam,&men);
	printf("zam=%c	men=%c",zam,men);
	for (i=0;i<l;i++)
	{
		if (s1[i]==men)
		{
			printf("Type 'yes' if you want to change the (%i) symbol: ",i);
			scanf("%c",&opana);			
			gets(s2);
			if (s2[0]='y' && s2[1]=='e' && s2[2]=='s')
				s1[i]=zam;
			else 
				continue;
			
		}
	}
	puts(s1);
	system("Pause");
}

