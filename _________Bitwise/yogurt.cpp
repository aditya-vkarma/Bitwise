// yogurt.cpp : main project file.
#include "stdafx.h"
#include<stdio.h>
#include<conio.h>
#include<limits.h>
void main()
{
	//_________________________________
	/*char a = -10;
	a>>=3;
	printf("%d\n",a);*/
	//_________________________________

	int num,k;
	unsigned int mask;
	printf("Enter a decimel no. : ");
	scanf("%d",&num);
	mask=1;
	
	k=sizeof(int)*CHAR_BIT;
	printf(" k =%d\n",k);
	mask<<=(k-1);
	puts("Binary equivalent is");
	for(int i=1;i<=k;i++)
	{
		putchar(((num & mask)==0)?'0':'1');
		if((k-i)%CHAR_BIT == 0)
			putchar(' ');
		//num<<=1;			//Either shift num to the left or mask to the right.
		mask>>=1;	
	}
	_getch();
	return;
}
