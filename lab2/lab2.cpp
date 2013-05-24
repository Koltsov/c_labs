// lab2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "conio.h"
#include <stdlib.h>
#include <time.h>


void main()
{
	srand(time(NULL));
	unsigned char symbol = 33 + rand() %255;
	int symbolCode=symbol;
	symbolCode=175;
	printf("Symbol code is %i \n", symbolCode);
	if ((symbolCode>=176 && symbolCode<=223)|| symbolCode==254)
	{
		printf("This is pseudographics");
	}	
	if ((symbolCode>=128 && symbolCode <=159)||symbolCode==240 || symbolCode==242) 
	{
		printf("This is a capital russian character");
	}
	if ((symbolCode>=160 && symbolCode <=175)|| (symbolCode>=224 && symbolCode <=239) || symbolCode==241 || symbolCode==243)
	{
		printf("This is a small russian character");
	}
	getch();
}

