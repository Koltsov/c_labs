// lab1.cpp : Defines the entry point for the console application.
//rhombus rectangle parallelogram square

#include "stdafx.h"
#include "conio.h"
#include <stdlib.h>
#include <time.h>


void main()
{
	srand(time(NULL));
	int a,b,u;
	a=1+rand();
	b=1+rand();
	u=1+rand()%179;
	a=b;
	printf ("a=%i, b=%i, u=%i \n", a, b, u);
	
	if (u==90)
	{
		if (a==b)
		{
			printf("This is square");
		}
		else
		{
			printf("This is rectangle");
		}
	}
	else
	{
		if (a==b)
		{
			printf("This is rhombus");
		}
		else
		{
			printf("This is parallelogram");
		}
	}
	getch();
}

