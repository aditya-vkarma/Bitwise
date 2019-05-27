// midni8.cpp : main project file.

#include "stdafx.h"
#include<stdio.h>
#include<conio.h>
void main()
{
	unsigned short int n = 8020, mask = 1<<15;
	n=(n<<11)>>11;
	for(register int i=0;i<16;i++)
	{
		printf(mask&n?"1":"0");
		mask>>=1;
	}
	//n=n<<11;
	//mask=1<<15;
	
	/*puts("\nAfter n=n<<11:");
	for(register int i=0;i<16;i++)
	{
		printf(mask&n?"1":"0");
		mask>>=1;
	}*/
	
	/*n=n>>11;
	mask=1<<15;
	printf("\nAfter n = n>>11: n = %u\n",n);
	for(register int i=0;i<16;i++)
	{
		printf(mask&n?"1":"0");
		mask>>=1;
	}*/

	_getch();
	return;
}
