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
	float X[301],Y[301],summator=0.2;
	X[0]=0;
	Y[0]=-1;
	while (i<=300) //���������� ������� ����������
	{
		X[i]=summator;
		summator+=0.2;
		Y[i]=sin(X[i]*X[i])-cos(X[i]);
		i++;
	}
	i=0;
	
	while (i<=300)
	{
		if (Y[i]>=0)
		{
			Yvalues1[j1]=i; //���������� ������� �������� ������������� �����
			j1++;
		}
		else
		{
			Yvalues2[j2]=i; //���������� ������� �������� ������������������
			j2++;
		}
		
		i++;
	}
		printf(" col 1  col 2  col 3  col 4  col 5  col 6  col 7  col 8  col 9  col 10 \n");
		i=0;
	int index=0;// ��������� ���������� ������� ����� ��� ����� ��������. ��� ������ ������ �������� ������ ������� ������� �������� ����� �������
	while (i<=30)
	{
		printf("_____________________________________________________________________\n\n");
		int j=0;
		while (j<10)
		{
			if (index <= j1)
			{
				//����������� ������ ����� �������� ���� ������
				if (index <10)
					printf("    ");
			}
			printf(" hui 1 ");
			j++;
			index++;
		}
		printf("\n");
		i++;
	}
	getch();
}

