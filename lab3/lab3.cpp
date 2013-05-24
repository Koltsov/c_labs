// lab3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "conio.h"
#include <stdlib.h>
#include <time.h>
#include <math.h>


void main ()
{
	int i=1, j1=0, j2=0, Yvalues1[301], Yvalues2[301]; 
	float X[301],Y[301],Y_min,Y_max,summator=0.2;
	X[0]=0;
	Y[0]=-1;
	while (i<=300) //заполнение массива элементами
	{
		X[i]=summator;
		summator+=0.2;
		Y[i]=sin(X[i]*X[i])-cos(X[i]);
		i++;
	}
	i=0;
	
	while (i<=300)
	{
		if (Y[i]<0)
		{
			Yvalues1[j1]=i; //заполнение массива индексов отрицательных чисел
			j1++;
		}
		else
		{
			Yvalues2[j2]=i; //заполнение массива индексов положительных чисел
			j2++;
		}
		
		i++;
	}
		printf(" col 1  col 2  col 3  col 4  col 5  col 6  col 7  col 8  col 9  col 10 \n"); //заголовки для колонок
		i=0;
	int index=0;// объявляем переменную индекса общую для обоих массивов. Как только индекс превысит размер первого массива начнется вывод второго
	j1-=1; //так как счетчик считал кол-во элементов,а нам нужен индекс крайнего
	j2-=1;
	while (i<=30)
	{
		
		int j=0;
		while (j<10)
		{
			if (index <= j1)
			{
				//оптимизация вывода чтобы табличка была ровной
				if (Yvalues1[index] <10)
					printf("   %i   ", Yvalues1[index]);
				if (Yvalues1[index]>=10 && Yvalues1[index]<100)
					printf("  %i   ", Yvalues1[index]);
				if (Yvalues1[index]>=100)
					printf(" %i   ", Yvalues1[index]);
			}
			else
			{
				int index2=index-j1-1; //-1 дабы получить снова нулевой индекс
				if (Yvalues2[index2] <10)
					printf("   %i   ", Yvalues2[index2]);
				if (Yvalues2[index2]>=10 && Yvalues2[index2]<100)
					printf("  %i   ", Yvalues2[index2]);
				if (Yvalues2[index2]>=100)
					printf(" %i   ", Yvalues2[index2]);
			}

			if (index==300) //останавливаемся когда вывели все эелементы
				break;
			j++;
			index++;
		}
		printf("\n");
		i++;
	}
	i=1;
	Y_min=Y_max=Y[0];
	while (i<=300) //нахождение минимального и максимального значений массива
	{
		if (Y[i]<Y_min)
			Y_min=Y[i];
		if (Y[i]>Y_max)
			Y_max=Y[i];
		i++;
	}
	printf("\n Y_min=%f, Y_max=%f", Y_min, Y_max);
	getch();
}

